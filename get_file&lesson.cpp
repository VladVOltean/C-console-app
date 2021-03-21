#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <time.h>

using namespace std;

void getlesson(char c[600], char r[])
{
    fstream file;
    file.open( c, ios::in);
    file.getline(r, 600);
    file.close();
}
void get_filename(char filename[30])
{
    int level_number, lesson_number;
        cout << endl << "Enter level you want to practice: ";
        cin >> level_number;
        cout << endl << "Enter the lesson number yot want to practice: ";
        cin >> lesson_number;
        system("cls");
        char level_charnr[2], lesson_charnr[3];
         strcpy(filename, "level");
         itoa(level_number, level_charnr, 10);
         itoa(lesson_number, lesson_charnr, 10);
         strcat(filename, level_charnr);
         strcat(filename, "\\lesson");
         strcat(filename, lesson_charnr);
        strcat(filename, ".txt");
}
