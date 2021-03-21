#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <cmath>
#include "typehead.h"

using namespace std;

int main()
{
    char row[500];
    char test;
    char filename[30];
    getlesson("Typero.txt",row);
    cout << row << endl;
    cin >> test;
    system("cls");
    while ( tolower(test) =='y'){
            typetest();
            cout << endl << "If you want to take the test again press (y)." << endl;
            cout << endl << "If you want to start practice press any key and enter. " << endl;
            cin >> test;
            system("cls");
    }
    test='y';
    while (tolower(test)=='y'){
            learning();
            cout << endl << "If you want to start e new lesson press (y)." << endl;
            cout << endl << "If you want to stop press any key " << endl;
            cin >> test;
            system("cls");

    }
    return 0;
}
