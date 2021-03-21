#include <iostream>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <cmath>
#include <cstdlib>
#include "typehead.h"

using namespace std;
void learning(){
        char filename[30];
        char row[600];
        get_filename(filename);
        cout << endl << "Level " << filename[5] << " Lesson " << filename[13] << endl;
        cout << endl << "START TYPING"<< endl << endl;
        getlesson(filename, row);
        cout << row << endl;
        // Get the text you type
        char ch = '1';
        char words[600];
        int i = 0;
        int mistake = 0;
        int start = time(0);
        while(ch != '\r'){
            ch = getch();
            if(ch == '\b')         {
             cout << '\b' << ' ' << '\b';
            i--;
            }
            else {
            words[i] = ch;
            i++;
            cout << '-';
            }
        }
        // Counting the elapsed time during typing
    int time_elapsed = time(0) - start;
    i--;
    words[i] = '\0';
    i=0;
        while(words[i]!='\0')
        {
            if(words[i]!= row[i]){
                mistake++;
            }
            i++;
        }
    cout << endl << endl << "You type:" << endl << words << endl;
    cout << endl << "You have " << mistake << " mistakes." << endl;
    int cpm=strlen(words)-mistake;
    int speed = round((double)cpm / time_elapsed*12);
    cout << " Your typing speed is:" << speed << " WPM " << endl;
}
