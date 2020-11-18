#include<iostream>
#include"Cfrac.h"
void enter_menu();

using namespace std;

void menu1()
{
    system("cls");
    Cfrac a;
    Cfrac b;

    a.InputPQ();

    auto res = a.innumber();
    cout << endl << res << endl;
    
    b = a.Dshort();
    cout << endl << b.getp() << "/" << b.getq() << " = " << b.innumber() << endl;

    char n;
    cout << "\nEnter - 'y' to go to Cfrac_1" << endl;
    cout << "\nEnter any button to menu Cfrac!" << endl;
    cin >> n;
    if (n != 'y')
        enter_menu();
    else
    {
        menu1();
        system("cls");
    }
}