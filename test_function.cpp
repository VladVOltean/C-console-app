#include <iostream>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include "typehead.h"
using namespace std;
void typetest()
{
        char row[600], words[600];
        char ch ='1';
        char char_randnr[2], randfile[30]="level3\\lesson";
        int randnr, i=0;
         srand (time(NULL));
         randnr=rand()%5+1;
         itoa(randnr, char_randnr, 10);
         strcat(randfile,char_randnr);
         strcat(randfile,".txt");
         int elapsed_seconds = 0, trigger=5;
        getlesson(randfile, row);
        cout << endl << row << endl;
        clock_t start=clock();
        do
        {
            ch=getch();
            if (ch=='\r')
                break;
            else if (ch=='\b')
            {
                cout << '\b' << ' ' << '\b';
                i--;
            }
            else
            {
                words[i]=ch;
                i++;
                cout<< '-';

            }
            clock_t difference = clock() - start;
            elapsed_seconds = difference / CLOCKS_PER_SEC;
        }
       while  (elapsed_seconds < trigger);
        cout << "Elapsed time: " << elapsed_seconds << "seconds." << endl;
        cout << endl<< "THE END" << endl;
        i--;
        words[i]='\0';
        cout << endl << endl << "Yout text is:" << endl << words << endl;
        i=0;
        int mistake=0;
        while (words[i] != '\0')
        {
            if (words[i]!= row[i])
                mistake++;
                i++;
        }
        cout << endl << "You have " << mistake << " mistakes." << endl;
        int speed = ((strlen(words)-mistake)/5);
        cout << endl << "Your typing speed is: " << speed << "WPM";
        cout << " You should start with level ";
            if (speed < 25 )
            cout << "1" << endl;
            else if (speed >=25 & speed < 40)
            cout << "2" << endl;
            else if(speed >=40)
            cout << "3" << endl;
            // system("cls");
}
