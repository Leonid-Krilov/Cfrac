#include<iostream>
#include <conio.h>
#include"Cfrac4.h"
void enter_menu();

using namespace std;

void menu2()
{
    Cfrac4 a;
    Cfrac4 b;

    char exit = ' ';
    while (exit != '1')
    {
        system("cls");
        a.InputPQ();
        b.InputPQ();

        Cfrac4 rez;

        char act = ' ';

        cout << "\nEnter act ->";
        cin >> act;
        cout << "(" << a.getp() << '/' << a.getq() << ")"
            << "(" << b.getp() << '/' << b.getq() << ")= ";
        switch (act)
        {
        case'+':
            rez = a + b;
            ((rez.getq() == 1) || (rez.getq() == -1)) ? cout << rez.innumber() << endl :
                cout << rez.getp() << '/' << rez.getq() << endl;
            break;
        case'-':
            rez = a - b;
            ((rez.getq() == 1) || (rez.getp() == -1)) ? cout << rez.innumber() << endl :
                cout << rez.getp() << '/' << rez.getq() << endl;
            break;
        case'*':
            rez = a * b;
            ((rez.getq() == 1) || (rez.getq() == -1)) ? cout << rez.innumber() << endl :
                cout << rez.getp() << '/' << rez.getq() << endl;
            break;
        case'/':
            rez = a / b;
            ((rez.getq() == 1) || (rez.getq() == -1)) ? cout << rez.innumber() << endl :
                cout << rez.getp() << '/' << rez.getq() << endl;
            break;
        default:
            break;
        }

        char b;
        cout << "\nEnter - 'y' to go to menu calculator" << endl;
        cout << "\nEnter any button to menu Cfrac!" << endl;
        cin >> b;
        if (b != 'y')
            enter_menu();
        else
        {
            menu2();
            system("cls");
        }

    }
}