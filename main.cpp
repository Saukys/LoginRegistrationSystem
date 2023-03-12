#include <iostream>
#include <fstream>

using namespace std;

class Account
{
public:
	char username[50];
	char password[50];

	void write_ac();
	void create_ac();
};

void Account::write_ac() {
	ofstream dout;

	dout.open("account.dat", ios::app | ios::binary);
	dout.write(reinterpret_cast<char*>(&*this), sizeof(Account));
	dout.close();
};

void Account::create_ac() {
	system("cls");
	cout << "Username: ";
	cin.ignore();
	cin.get(username, 50);
	cout << "Password: ";
	cin.ignore();
	cin.get(password, 50);
	write_ac();
}



void login();
void registeration();

int main()
{
	int c = 0;

	while (c!=3)
	{
		system("cls");
		cout << "\n\n\nLogin/Registration System\n";
		cout << "\n1. Login";
		cout << "\n2. Register";
		cout << "\n3. Exit\n";
		cout << "\nSelect your action: ";
		cin >> c;

		switch (c)
		{
		case 1:
			login();
			break;

		case 2:
			registeration();
			break;

		case 3:
			cout << "GOODBYE";
			break;

		default:
			break;
		}
	}

	return 0;
}

void login()
{
	return;
}

void registeration()
{
	Account ac;
	ac.create_ac();
	login();
}
