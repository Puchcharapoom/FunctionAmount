#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void update_balance(string, float, float& balance);
int main()
{
	float balance;
	balance = 10000;
	string command;
	float dollars;
	cout << "Your balance = 10,000.00" << endl;

	while (true)
	{
		cout << "Input command (1 or withdraw , 2 deposit ,0 exit): ";
		cin >> command;

		if (command == "0")break;

		cout << "Input Amount : ";
		cin >> dollars;

		update_balance(command, dollars, balance);

		cout << "Yout balance = " << fixed;
		cout << setprecision(2) << balance << endl << endl;
	}
	return 0;
}

void update_balance(string command, float dollars, float& balance)
{
	if (command == "1")balance = balance + dollars;
	else if (command == "2")balance = balance - dollars;
}