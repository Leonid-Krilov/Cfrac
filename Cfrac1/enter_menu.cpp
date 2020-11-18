#include<iostream>
void menu1();
void menu2();

using namespace std;

void enter_menu()
{
	system("cls");
	char enter;
	cout << "Enter task, Cfrac_1 or cfrac_4";
	cout << "\nPick_1 - Cfrac_1 \nPick_2 - Cfrac_4 \nEnter any button to exit!" << endl;
	cout << "Enter---> ";
	while (true)
	{
		cin >> enter;
		switch (enter)
		{
		case '1':
			menu1();
			break;
		case'2':
			menu2();
			break;
		default:
			break;
		}



		char y;
		cout << "\nEnter - 'y' to go to menu Cfrac" << endl;
		cout << "\nEnter any button to exit!" << endl;
		cin >> y;
		if (y != 'y')
			exit(0);
		else
			enter_menu();
	}
}