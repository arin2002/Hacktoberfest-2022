#include<iostream>
using namespace std;
int choices;
string edit;
int which_user = 0;
struct user
{
	string id, email, name, password, address, lines[3];
}users[3];
struct line
{
	string number, package_type, start_date, renweal_date;
	float balance = 0;
}lines[9];
void editing(int)
{
	cout << "What wouid you edit" << endl;
	cout << "1)Id" << endl;
	cout << "2)Email" << endl;
	cout << "3)Name" << endl;
	cout << "4)Password" << endl;
	cout << "5)address" << endl;
	cout << "6)Back to menu" << endl;
	cin >> choices;
	if ((choices > 0) && (choices < 7)) {
		if (choices == 1) {
			cout << "Enter new id" << endl;
			cin >> edit;
			users[which_user].id = edit;
		}
		else if (choices == 2) {
			cout << "Enter new email" << endl;
			cin >> edit;
			users[which_user].email = edit;
		}
		else if (choices == 3) {
			cout << "Enter new name" << endl;
			cin >> edit;
			users[which_user].name = edit;
		}
		else if (choices == 4) {
			cout << "Enter new password" << endl;
			cin >> edit;
			users[which_user].password = edit;
		}
		else if (choices == 5) {
			cout << "Enter new address" << endl;
			cin >> edit;
			users[which_user].address = edit;
		}
	}
	else {
		cout << "Wrong answer" << endl;
		cin >> choices;
		while (!((choices < 7) && (choices > 0))) {
			cout << "Wrong answer" << endl;
			cin >> choices;
		}
		if (choices == 1) {
			cout << "Enter new id" << endl;
			cin >> edit;
			users[which_user].id = edit;
		}
		else if (choices == 2) {
			cout << "Enter new email" << endl;
			cin >> edit;
			users[which_user].email = edit;
		}
		else if (choices == 3) {
			cout << "Enter new name" << endl;
			cin >> edit;
			users[which_user].name = edit;
		}
		else if (choices == 4) {
			cout << "Enter new password" << endl;
			cin >> edit;
			users[which_user].password = edit;
		}
		else if (choices == 5) {
			cout << "Enter new address" << endl;
			cin >> edit;
			users[which_user].address = edit;
		}
	}

}
void Renew_subscription(int)
{
	if ((which_user == 2) || (which_user == 1)) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		if ((choices > 0) && (choices < 4)) {
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "your supscription has been renewed" << endl;
			}
		}
		else {
			cout << "Wrong answer" << endl;
			cout << "Enter correct answer" << endl;
			cin >> choices;
			while (!((choices > 0) || (choices < 4))) {
				cout << "Wrong answer" << endl;
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "your supscription has been renewed" << endl;
			}
		}
	}
	else if (which_user == 0) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			if (users[which_user].lines[i] > " ")
				sum++;
		}

		if (sum == 1)
			cout << "your supscription has been renewed" << endl;
		else if (sum == 2) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			if ((choices > 0) && (choices < 3)) {
				if ((choices == 1) || (choices == 2)) {
					cout << "your supscription has been renewed" << endl;
				}
			}
			else {
				cout << "Wrong answer" << endl;
				cout << "Enter correct answer" << endl;
				cin >> choices;
				while (!((choices > 0) || (choices < 3))) {
					cout << "Wrong answer" << endl;
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if ((choices == 1) || (choices == 2)) {
					cout << "your supscription has been renewed" << endl;
				}
			}
		}
		else if (sum == 3) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			if ((choices > 0) && (choices < 4)) {
				if ((choices == 1) || (choices == 2) || (choices == 3)) {
					cout << "your supscription has been renewed" << endl;
				}
			}
			else {
				cout << "Wrong answer" << endl;
				cout << "Enter correct answer" << endl;
				cin >> choices;
				while (!((choices > 0) || (choices < 4))) {
					cout << "Wrong answer" << endl;
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if ((choices == 1) || (choices == 2) || (choices == 3)) {
					cout << "your supscription has been renewed" << endl;
				}
			}
		}
	}
}
void Recharging_balance(int)
{
	string serial;
	if (which_user == 1) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		if ((choices > 0) && (choices < 4)) {
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 10 << endl;
						lines[choices - 1].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 20 << endl;
						lines[choices - 1].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 30 << endl;
						lines[choices - 1].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 40 << endl;
						lines[choices - 1].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 50 << endl;
						lines[choices - 1].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 100 << endl;
						lines[choices - 1].balance += 100;
					}
				}
				else {
					cout << "Invalid serial" << endl;
					cin >> serial;
					while (!((serial.size() == 15) && (serial[serial.size() - 1] < '7'))) {
						cout << "Invalid serial" << endl;
						cin >> serial;
					}
					if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
						if (serial[serial.size() - 1] == '1') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 10 << endl;
							lines[choices - 1].balance += 10;
						}
						else if (serial[serial.size() - 1] == '2') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 20 << endl;
							lines[choices - 1].balance += 20;
						}
						else if (serial[serial.size() - 1] == '3') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 30 << endl;
							lines[choices - 1].balance += 30;
						}
						else if (serial[serial.size() - 1] == '4') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 40 << endl;
							lines[choices - 1].balance += 40;
						}
						else if (serial[serial.size() - 1] == '5') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 50 << endl;
							lines[choices - 1].balance += 50;
						}
						else if (serial[serial.size() - 1] == '6') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices - 1].balance + 100 << endl;
							lines[choices - 1].balance += 100;
						}
					}
				}
			}
		}
		else {
			cout << "Wrong answer" << endl;
			cout << "Enter correct answer" << endl;
			cin >> choices;
			while (!((choices > 0) || (choices < 4))) {
				cout << "Wrong answer" << endl;
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 10 << endl;
						lines[choices - 1].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 20 << endl;
						lines[choices - 1].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 30 << endl;
						lines[choices - 1].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 40 << endl;
						lines[choices - 1].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 50 << endl;
						lines[choices - 1].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices - 1].balance + 100 << endl;
						lines[choices - 1].balance += 100;
					}
				}
			}
		}
	}
	else if (which_user == 2) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		if ((choices > 0) && (choices < 4)) {
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 10 << endl;
						lines[choices - 1].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 20 << endl;
						lines[choices - 1].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 30 << endl;
						lines[choices - 1].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 40 << endl;
						lines[choices - 1].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 50 << endl;
						lines[choices - 1].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 100 << endl;
						lines[choices - 1].balance += 100;
					}
				}
				else {
					cout << "Invalid serial" << endl;
					cin >> serial;
					while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
						cout << "Invalid serial" << endl;
						cin >> serial;
					}
					if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
						if (serial[serial.size() - 1] == '1') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 10 << endl;
							lines[choices - 1].balance += 10;
						}
						else if (serial[serial.size() - 1] == '2') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 20 << endl;
							lines[choices - 1].balance += 20;
						}
						else if (serial[serial.size() - 1] == '3') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 30 << endl;
							lines[choices - 1].balance += 30;
						}
						else if (serial[serial.size() - 1] == '4') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 40 << endl;
							lines[choices - 1].balance += 40;
						}
						else if (serial[serial.size() - 1] == '5') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 50 << endl;
							lines[choices - 1].balance += 50;
						}
						else if (serial[serial.size() - 1] == '6') {

							cout << "You have recharged your balance" << endl;
							cout << "your balance = " << lines[choices + 2].balance + 100 << endl;
							lines[choices - 1].balance += 100;
						}
					}
				}
			}
		}
		else {
			cout << "Wrong answer" << endl;
			cout << "Enter correct answer" << endl;
			cin >> choices;
			while (!((choices > 0) || (choices < 4))) {
				cout << "Wrong answer" << endl;
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if ((choices == 1) || (choices == 2) || (choices == 3)) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 10 << endl;
						lines[choices - 1].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 20 << endl;
						lines[choices - 1].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 30 << endl;
						lines[choices - 1].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 40 << endl;
						lines[choices - 1].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 50 << endl;
						lines[choices - 1].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[choices + 2].balance + 100 << endl;
						lines[choices - 1].balance += 100;
					}
				}
			}
		}
	}
	else if (which_user == 0) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			if (users[which_user].lines[i] > " ")
				sum++;
		}

		if (sum == 1) {
			cout << "Enter the serial number" << endl;
			cin >> serial;
			while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
				cout << "Invalid serial" << endl;
				cin >> serial;
			}
			if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
				if (serial[serial.size() - 1] == '1') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 10 << endl;
					lines[6].balance += 10;
				}
				else if (serial[serial.size() - 1] == '2') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 20 << endl;
					lines[6].balance += 20;
				}
				else if (serial[serial.size() - 1] == '3') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 30 << endl;
					lines[6].balance += 30;
				}
				else if (serial[serial.size() - 1] == '4') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 40 << endl;
					lines[6].balance += 40;
				}
				else if (serial[serial.size() - 1] == '5') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 50 << endl;
					lines[6].balance += 50;
				}
				else if (serial[serial.size() - 1] == '6') {

					cout << "You have recharged your balance" << endl;
					cout << "your balance = " << lines[6].balance + 100 << endl;
					lines[6].balance += 100;
				}
			}
		}
		else if (sum == 2) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 3) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
					cout << "Invalid serial" << endl;
					cin >> serial;
				}
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 10 << endl;
						lines[6].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 20 << endl;
						lines[6].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 30 << endl;
						lines[6].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 40 << endl;
						lines[6].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 50 << endl;
						lines[6].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 100 << endl;
						lines[6].balance += 100;
					}
				}

			}
			else if (choices == 2) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
					cout << "Invalid serial" << endl;
					cin >> serial;
				}
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 10 << endl;
						lines[7].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 20 << endl;
						lines[7].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 30 << endl;
						lines[7].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 40 << endl;
						lines[7].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 50 << endl;
						lines[7].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 100 << endl;
						lines[7].balance += 100;
					}
				}
			}
		}
		else if (sum == 3) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 4) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
					cout << "Invalid serial" << endl;
					cin >> serial;
				}
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 10 << endl;
						lines[6].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 20 << endl;
						lines[6].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 30 << endl;
						lines[6].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 40 << endl;
						lines[6].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 50 << endl;
						lines[6].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[6].balance + 100 << endl;
						lines[6].balance += 100;
					}
				}

			}
			else if (choices == 2) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
					cout << "Invalid serial" << endl;
					cin >> serial;
				}
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 10 << endl;
						lines[7].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 20 << endl;
						lines[7].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 30 << endl;
						lines[7].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 40 << endl;
						lines[7].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 50 << endl;
						lines[7].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[7].balance + 100 << endl;
						lines[7].balance += 100;
					}
				}
			}
			else if (choices == 3) {
				cout << "Enter the serial number" << endl;
				cin >> serial;
				while (!((serial.size() == 15) && (serial[serial.size() - 1]) < '7')) {
					cout << "Invalid serial" << endl;
					cin >> serial;
				}
				if ((serial.size() == 15) && (serial[serial.size() - 1] < '7')) {
					if (serial[serial.size() - 1] == '1') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 10 << endl;
						lines[8].balance += 10;
					}
					else if (serial[serial.size() - 1] == '2') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 20 << endl;
						lines[8].balance += 20;
					}
					else if (serial[serial.size() - 1] == '3') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 30 << endl;
						lines[8].balance += 30;
					}
					else if (serial[serial.size() - 1] == '4') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 40 << endl;
						lines[8].balance += 40;
					}
					else if (serial[serial.size() - 1] == '5') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 50 << endl;
						lines[8].balance += 50;
					}
					else if (serial[serial.size() - 1] == '6') {

						cout << "You have recharged your balance" << endl;
						cout << "your balance = " << lines[8].balance + 100 << endl;
						lines[8].balance += 100;
					}
				}
			}
		}
	}
}
void call_message(void) {
	if (which_user == 0) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			if (users[which_user].lines[i] > " ")
				sum++;
		}
		if (sum == 1) {
			lines[6].balance -= .25;
			cout << "your balance = " << lines[6].balance << endl;
		}
		else if (sum == 2) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 3) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				lines[6].balance -= .25;
				cout << "your balance = " << lines[6].balance << endl;
			}
			else if (choices == 2) {
				lines[7].balance -= .25;
				cout << "your balance = " << lines[7].balance << endl;
			}
		}
		else if (sum == 3) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 4) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				lines[6].balance -= .25;
				cout << "your balance = " << lines[6].balance << endl;
			}
			else if (choices == 2) {
				lines[7].balance -= .25;
				cout << "your balance = " << lines[7].balance << endl;
			}
			else if (choices == 3) {
				lines[8].balance -= .25;
				cout << "your balance = " << lines[8].balance << endl;
			}
		}
	}
	else if (which_user == 1) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1) {
			lines[0].balance -= .25;
			cout << "your balance = " << lines[0].balance << endl;
		}
		else if (choices == 2) {
			lines[1].balance -= .25;
			cout << "your balance = " << lines[1].balance << endl;
		}
		else if (choices == 3) {
			lines[2].balance -= .25;
			cout << "your balance = " << lines[2].balance << endl;
		}
	}
	else if (which_user == 2) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1) {
			lines[3].balance -= .25;
			cout << "your balance = " << lines[3].balance << endl;
		}
		else if (choices == 2) {
			lines[4].balance -= .25;
			cout << "your balance = " << lines[4].balance << endl;
		}
		else if (choices == 3) {
			lines[5].balance -= .25;
			cout << "your balance = " << lines[5].balance << endl;
		}
	}
}
void changing_package(void)
{
	if (which_user == 0) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			if (users[which_user].lines[i] > " ")
				sum++;
		}
		if (sum == 1) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[6].package_type = "Basic";
			else if (choices == 2)
				lines[6].package_type = "Daily_units";
			else if (choices == 3)
				lines[6].package_type = "Mix_units";
			else if (choices == 4)
				lines[6].package_type = "Internet_units";
			else if (choices == 5)
				lines[6].package_type = "Unlimited_calls";
		}
		else if (sum == 2) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 3) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 6))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1)
					lines[6].package_type = "Basic";
				else if (choices == 2)
					lines[6].package_type = "Daily_units";
				else if (choices == 3)
					lines[6].package_type = "Mix_units";
				else if (choices == 4)
					lines[6].package_type = "Internet_units";
				else if (choices == 5)
					lines[6].package_type = "Unlimited_calls";
			}
			else if (choices == 2) {
				cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 6))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1)
					lines[7].package_type = "Basic";
				else if (choices == 2)
					lines[7].package_type = "Daily_units";
				else if (choices == 3)
					lines[7].package_type = "Mix_units";
				else if (choices == 4)
					lines[7].package_type = "Internet_units";
				else if (choices == 5)
					lines[7].package_type = "Unlimited_calls";
			}
		}
		else if (sum == 3) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 4) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 6))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1)
					lines[6].package_type = "Basic";
				else if (choices == 2)
					lines[6].package_type = "Daily_units";
				else if (choices == 3)
					lines[6].package_type = "Mix_units";
				else if (choices == 4)
					lines[6].package_type = "Internet_units";
				else if (choices == 5)
					lines[6].package_type = "Unlimited_calls";
			}
			else if (choices == 2) {
				cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 6))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1)
					lines[7].package_type = "Basic";
				else if (choices == 2)
					lines[7].package_type = "Daily_units";
				else if (choices == 3)
					lines[7].package_type = "Mix_units";
				else if (choices == 4)
					lines[7].package_type = "Internet_units";
				else if (choices == 5)
					lines[7].package_type = "Unlimited_calls";
			}
			else if (choices == 3) {
				cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 6))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1)
					lines[8].package_type = "Basic";
				else if (choices == 2)
					lines[8].package_type = "Daily_units";
				else if (choices == 3)
					lines[8].package_type = "Mix_units";
				else if (choices == 4)
					lines[8].package_type = "Internet_units";
				else if (choices == 5)
					lines[8].package_type = "Unlimited_calls";
			}
		}
	}
	else if (which_user == 1) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[0].package_type = "Basic";
			else if (choices == 2)
				lines[0].package_type = "Daily_units";
			else if (choices == 3)
				lines[0].package_type = "Mix_units";
			else if (choices == 4)
				lines[0].package_type = "Internet_units";
			else if (choices == 5)
				lines[0].package_type = "Unlimited_calls";
		}
		else if (choices == 2) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[1].package_type = "Basic";
			else if (choices == 2)
				lines[1].package_type = "Daily_units";
			else if (choices == 3)
				lines[1].package_type = "Mix_units";
			else if (choices == 4)
				lines[1].package_type = "Internet_units";
			else if (choices == 5)
				lines[1].package_type = "Unlimited_calls";
		}
		else if (choices == 3) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[2].package_type = "Basic";
			else if (choices == 2)
				lines[2].package_type = "Daily_units";
			else if (choices == 3)
				lines[2].package_type = "Mix_units";
			else if (choices == 4)
				lines[2].package_type = "Internet_units";
			else if (choices == 5)
				lines[2].package_type = "Unlimited_calls";
		}
	}
	else if (which_user == 2) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[3].package_type = "Basic";
			else if (choices == 2)
				lines[3].package_type = "Daily_units";
			else if (choices == 3)
				lines[3].package_type = "Mix_units";
			else if (choices == 4)
				lines[3].package_type = "Internet_units";
			else if (choices == 5)
				lines[3].package_type = "Unlimited_calls";
		}
		else if (choices == 2) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[4].package_type = "Basic";
			else if (choices == 2)
				lines[4].package_type = "Daily_units";
			else if (choices == 3)
				lines[4].package_type = "Mix_units";
			else if (choices == 4)
				lines[4].package_type = "Internet_units";
			else if (choices == 5)
				lines[4].package_type = "Unlimited_calls";
		}
		else if (choices == 3) {
			cout << "1)Basic" << endl << "2)Daily_units" << endl << "3)Mix_units" << endl << "4)Internet_units" << endl << "5)Unlimited_calls" << endl;
			cin >> choices;
			while (!((choices > 0) && (choices < 6))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1)
				lines[5].package_type = "Basic";
			else if (choices == 2)
				lines[5].package_type = "Daily_units";
			else if (choices == 3)
				lines[5].package_type = "Mix_units";
			else if (choices == 4)
				lines[5].package_type = "Internet_units";
			else if (choices == 5)
				lines[5].package_type = "Unlimited_calls";
		}
	}
	cout << "You have changed your package" << endl;
}
void Transfer_balance(void)
{
	float transfer = 0;
	if (which_user == 1) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1)
			cout << "You cannot transfer balance" << endl;
		else if (choices == 2) {
			cout << "How much do you want to transfer" << endl;
			cin >> transfer;
			while (!((transfer > 0) && (transfer < lines[1].balance))) {
				cout << "Please enter valid value" << endl;
				cin >> transfer;
			}
			lines[1].balance -= transfer;
			lines[4].balance += transfer;
		}
		else if (choices == 3) {
			cout << "How much do you want to transfer" << endl;
			cin >> transfer;
			while (!((transfer > 0) && (transfer < lines[2].balance))) {
				cout << "Please enter valid value" << endl;
				cin >> transfer;
			}
			lines[2].balance -= transfer;
			lines[5].balance += transfer;
		}
	}
	else if (which_user == 2) {
		cout << "which Number ?" << endl;
		for (int i = 0; i < 3; i++) {
			cout << i + 1 << ")" << users[which_user].lines[i] << endl;
		}
		cin >> choices;
		while (!((choices < 4) && (choices > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> choices;
		}
		if (choices == 1)
			cout << "You cannot transfer balance" << endl;
		else if (choices == 2) {
			cout << "How much do you want to transfer" << endl;
			cin >> transfer;
			while (!((transfer > 0) && (transfer < lines[4].balance))) {
				cout << "Please enter valid value" << endl;
				cin >> transfer;
			}
			lines[4].balance -= transfer;
			lines[1].balance += transfer;
		}
		else if (choices == 3) {
			cout << "How much do you want to transfer" << endl;
			cin >> transfer;
			while (!((transfer > 0) && (transfer < lines[5].balance))) {
				cout << "Please enter valid value" << endl;
				cin >> transfer;
			}
			lines[5].balance -= transfer;
			lines[2].balance += transfer;
		}
	}
	else if (which_user == 0) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			if (users[which_user].lines[i] > " ")
				sum++;
		}
		if (sum == 1) {
			if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '0')) {
				cout << "How much do you want to transfer" << endl;
				cin >> transfer;
				while (!((transfer > 0) && (transfer < lines[6].balance))) {
					cout << "Please enter valid value" << endl;
					cin >> transfer;
				}
				lines[6].balance -= transfer;
				lines[0].balance += transfer;
			}
			else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '1')) {
				cout << "How much do you want to transfer" << endl;
				cin >> transfer;
				while (!((transfer > 0) && (transfer < lines[6].balance))) {
					cout << "Please enter valid value" << endl;
					cin >> transfer;
				}
				lines[6].balance -= transfer;
				lines[3].balance += transfer;
			}
			else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '2')) {
				cout << "How much do you want to transfer" << endl;
				cin >> transfer;
				while (!((transfer > 0) && (transfer < lines[6].balance))) {
					cout << "Please enter valid value" << endl;
					cin >> transfer;
				}
				cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 3))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1) {
					lines[6].balance -= transfer;
					lines[1].balance += transfer;
				}
				else if (choices == 2) {
					lines[6].balance -= transfer;
					lines[4].balance += transfer;
				}
			}
			else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '5')) {
				cout << "How much do you want to transfer" << endl;
				cin >> transfer;
				while (!((transfer > 0) && (transfer < lines[6].balance))) {
					cout << "Please enter valid value" << endl;
					cin >> transfer;
				}
				cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
				cin >> choices;
				while (!((choices > 0) && (choices < 3))) {
					cout << "Enter correct answer" << endl;
					cin >> choices;
				}
				if (choices == 1) {
					lines[6].balance -= transfer;
					lines[2].balance += transfer;
				}
				else if (choices == 2) {
					lines[6].balance -= transfer;
					lines[5].balance += transfer;
				}
			}
			else
				cout << "You cannot transfer balance" << endl;
		}
		else if (sum == 2) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 3) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '0')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[6].balance -= transfer;
					lines[0].balance += transfer;
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '1')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[6].balance -= transfer;
					lines[3].balance += transfer;
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '2')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[6].balance -= transfer;
						lines[1].balance += transfer;
					}
					else if (choices == 2) {
						lines[6].balance -= transfer;
						lines[4].balance += transfer;
					}
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '5')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[6].balance -= transfer;
						lines[2].balance += transfer;
					}
					else if (choices == 2) {
						lines[6].balance -= transfer;
						lines[5].balance += transfer;
					}
				}
				else
					cout << "You cannot transfer balance" << endl;
			}
			else if (choices == 2) {
				if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '0')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[7].balance -= transfer;
					lines[0].balance += transfer;
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '1')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[7].balance -= transfer;
					lines[3].balance += transfer;
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '2')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[7].balance -= transfer;
						lines[1].balance += transfer;
					}
					else if (choices == 2) {
						lines[7].balance -= transfer;
						lines[4].balance += transfer;
					}
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '5')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[7].balance -= transfer;
						lines[2].balance += transfer;
					}
					else if (choices == 2) {
						lines[7].balance -= transfer;
						lines[5].balance += transfer;
					}
				}
				else
					cout << "You cannot transfer balance" << endl;
			}
		}
		else if (sum == 3) {
			cout << "which Number ?" << endl;
			for (int i = 0; i < 2; i++) {
				cout << i + 1 << ")" << users[which_user].lines[i] << endl;
			}
			cin >> choices;
			while (!((choices < 3) && (choices > 0))) {
				cout << "Enter correct answer" << endl;
				cin >> choices;
			}
			if (choices == 1) {
				if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '0')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[6].balance -= transfer;
					lines[0].balance += transfer;
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '1')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[6].balance -= transfer;
					lines[3].balance += transfer;
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '2')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[6].balance -= transfer;
						lines[1].balance += transfer;
					}
					else if (choices == 2) {
						lines[6].balance -= transfer;
						lines[4].balance += transfer;
					}
				}
				else if ((lines[6].number[0] == '0') && (lines[6].number[1] == '1') && (lines[6].number[2] == '5')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[6].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[6].balance -= transfer;
						lines[2].balance += transfer;
					}
					else if (choices == 2) {
						lines[6].balance -= transfer;
						lines[5].balance += transfer;
					}
				}
				else
					cout << "You cannot transfer balance" << endl;
			}
			else if (choices == 2) {
				if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '0')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[7].balance -= transfer;
					lines[0].balance += transfer;
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '1')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[7].balance -= transfer;
					lines[3].balance += transfer;
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '2')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[7].balance -= transfer;
						lines[1].balance += transfer;
					}
					else if (choices == 2) {
						lines[7].balance -= transfer;
						lines[4].balance += transfer;
					}
				}
				else if ((lines[7].number[0] == '0') && (lines[7].number[1] == '1') && (lines[7].number[2] == '5')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[7].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[7].balance -= transfer;
						lines[2].balance += transfer;
					}
					else if (choices == 2) {
						lines[7].balance -= transfer;
						lines[5].balance += transfer;
					}
				}
				else
					cout << "You cannot transfer balance" << endl;
			}
			else if (choices == 3) {
				if ((lines[8].number[0] == '0') && (lines[8].number[1] == '1') && (lines[8].number[2] == '0')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[8].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[8].balance -= transfer;
					lines[0].balance += transfer;
				}
				else if ((lines[8].number[0] == '0') && (lines[8].number[1] == '1') && (lines[8].number[2] == '1')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[8].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					lines[8].balance -= transfer;
					lines[3].balance += transfer;
				}
				else if ((lines[8].number[0] == '0') && (lines[8].number[1] == '1') && (lines[8].number[2] == '2')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[8].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[1].number << endl << "2)" << lines[4].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[8].balance -= transfer;
						lines[1].balance += transfer;
					}
					else if (choices == 2) {
						lines[8].balance -= transfer;
						lines[4].balance += transfer;
					}
				}
				else if ((lines[8].number[0] == '0') && (lines[8].number[1] == '1') && (lines[8].number[2] == '5')) {
					cout << "How much do you want to transfer" << endl;
					cin >> transfer;
					while (!((transfer > 0) && (transfer < lines[8].balance))) {
						cout << "Please enter valid value" << endl;
						cin >> transfer;
					}
					cout << "1)" << lines[2].number << endl << "2)" << lines[5].number << endl;
					cin >> choices;
					while (!((choices > 0) && (choices < 3))) {
						cout << "Enter correct answer" << endl;
						cin >> choices;
					}
					if (choices == 1) {
						lines[8].balance -= transfer;
						lines[2].balance += transfer;
					}
					else if (choices == 2) {
						lines[8].balance -= transfer;
						lines[5].balance += transfer;
					}
				}
				else
					cout << "You cannot transfer balance" << endl;
			}
		}
	}
	cout << "Transfer combleted" << endl;
}
void signup(void)
{
	int setofnumbers;
	cout << "enter your id" << endl;
	cin >> users[0].id;
	cout << "enter your email" << endl;
	cin >> users[0].email;
	cout << "enter your name" << endl;
	cin >> users[0].name;
	cout << "create your password " << endl;
	cin >> users[0].password;
	cout << "enter your address" << endl;
	cin >> users[0].address;
	cout << "How many number do you have" << endl;
	cin >> setofnumbers;
	if ((setofnumbers <= 3) && (setofnumbers > 0)) {
		for (int i = 0; i < setofnumbers; i++) {
			cout << "Enter the number" << endl;
			cin >> users[0].lines[i];
			lines[6 + i].number = users[0].lines[i];
			if (i == 0) {
				lines[6 + i].balance = 70;
				lines[6 + i].package_type = "Basic";
				lines[6 + i].start_date = "03/05/2020";
				lines[6 + i].renweal_date = "02/06/2020";
			}
			else if (i == 1) {
				lines[6 + i].balance = 45;
				lines[6 + i].package_type = "Internet_units";
				lines[6 + i].start_date = "03/05/2020";
				lines[6 + i].renweal_date = "02/06/2020";
			}
			else if (i == 2) {
				lines[i + 6].balance = 21;
				lines[i + 6].package_type = "unlimited_messages";
				lines[i + 6].start_date = "03/05/2020";
				lines[i + 6].renweal_date = "02/06/2020";
			}
		}
	}
	else {
		cout << "enter correct number" << endl;
		cin >> setofnumbers;
		while (!((setofnumbers < 4) && (setofnumbers > 0))) {
			cout << "enter correct number" << endl;
			cin >> setofnumbers;
		}
		for (int i = 0; i < setofnumbers; i++) {
			cout << "enter the number" << endl;
			cin >> users[0].lines[i];
			lines[6 + i].number = users[0].lines[i];
			if (i == 0) {
				lines[6 + i].balance = 70;
				lines[6 + i].package_type = "Basic";
				lines[6 + i].start_date = "03/05/2020";
				lines[6 + i].renweal_date = "02/06/2020";
			}
			else if (i == 1) {
				lines[6 + i].balance = 45;
				lines[6 + i].package_type = "Internet_units";
				lines[6 + i].start_date = "03/05/2020";
				lines[6 + i].renweal_date = "02/06/2020";
			}
			else if (i == 2) {
				lines[i + 6].balance = 21;
				lines[i + 6].package_type = "unlimited_messages";
				lines[i + 6].start_date = "03/05/2020";
				lines[i + 6].renweal_date = "02/06/2020";
			}
		}
	}
	cout << "Now we have finshed" << endl;
	cout << "Welcome in your telecom system" << endl;
}
void login(int&)
{
	string id1 = {};
	string password1;
	cout << "enter your id" << endl;
	cin >> id1;
	cout << "enter your passowrd" << endl;
	cin >> password1;
	if (((id1 == users[1].id) && (password1 == users[1].password)) || ((id1 == users[2].id) && (password1 == users[2].password))) {
		cout << "welcome in your telecom system" << endl;
		if (id1 == users[1].id)
			which_user = 1;
		if (id1 == users[2].id)
			which_user = 2;
	}
	else {
		cout << "Enter correct information" << endl;
		cout << "enter your id" << endl;
		cin >> id1;
		cout << "enter your passowrd" << endl;
		cin >> password1;
		while (!(((id1 == users[1].id) && (password1 == users[1].password)) || ((id1 == users[2].id) && (password1 == users[2].password)))) {
			cout << "Enter correct information" << endl;
			cout << "enter your id" << endl;
			cin >> id1;
			cout << "enter your passowrd" << endl;
			cin >> password1;

		}
		if (id1 == users[1].id)
			which_user = 1;
		if (id1 == users[2].id)
			which_user = 2;
		cout << "welcome in your telecom system" << endl;
	}
}
void starting(int&)
{
	int choice;
	cout << "1)Login" << endl;
	cout << "2)Sign up" << endl;
	cin >> choice;
	while ((choice != 1) && (choice != 2)) {
		cout << "enter correct number" << endl;
		cin >> choice;
	}

	if (choice == 1)
		login(which_user);
	else {
		which_user = 0;
		signup();
	}
}
int main()
{
	int which_user;
	users[1].id = "0001";
	users[1].email = "kareem.0401@gmail.com";
	users[1].name = "kareem";
	users[1].password = "555";
	users[1].address = "50thshoubrastreet";
	users[1].lines[0] = "01020150411";
	users[1].lines[1] = "01220150411";
	users[1].lines[2] = "01520150411";
	users[2].id = "0002";
	users[2].email = "msh.952002@gmail.com";
	users[2].name = "oooo";
	users[2].password = "666";
	users[2].address = "55thshoubrastreet";
	users[2].lines[0] = "01150601701";
	users[2].lines[1] = "01250601701";
	users[2].lines[2] = "01550601701";
	lines[0].number = users[1].lines[0];
	lines[1].number = users[1].lines[1];
	lines[2].number = users[1].lines[2];
	lines[3].number = users[2].lines[0];
	lines[4].number = users[2].lines[1];
	lines[5].number = users[2].lines[2];
	lines[0].balance = 100;
	lines[0].package_type = "Basic";
	lines[0].start_date = "03/05/2020";
	lines[0].renweal_date = "02/06/2020";
	lines[1].balance = 70;
	lines[1].package_type = "Daily_units";
	lines[1].start_date = "01/05/2020";
	lines[1].renweal_date = "31/05/2020";
	lines[2].balance = 21;
	lines[2].package_type = "Internet_units";
	lines[2].start_date = "12/05/2020";
	lines[2].renweal_date = "11/06/2020";
	lines[3].balance = 35;
	lines[3].package_type = "Basic";
	lines[3].start_date = "04/05/2020";
	lines[3].renweal_date = "03/06/2020";
	lines[4].balance = 100;
	lines[4].package_type = "Mix_units";
	lines[4].start_date = "06/05/2020";
	lines[4].renweal_date = "05/06/2020";
	lines[5].balance = 49;
	lines[5].package_type = "unlimited_calls";
	lines[5].start_date = "01/05/2020";
	lines[5].renweal_date = "31/05/2020";


	starting(which_user);

	while (true) {
		int selection;
		cout << "1 _ Renew Subscriotion" << endl << endl;
		cout << "2 _ Changing Package" << endl << endl;
		cout << "3 _ Make a Call" << endl << endl;
		cout << "4 _ Send Message" << endl << endl;
		cout << "5 _ Recharging Balance" << endl << endl;
		cout << "6 _ Transfer Balance" << endl << endl;
		cout << "7 _ Edit your account information" << endl << endl;
		cout << "8 _ Exit" << endl;
		cin >> selection;
		while (!((selection < 9) && (selection > 0))) {
			cout << "Enter correct answer" << endl;
			cin >> selection;
		}
		if ((selection > 0) && (selection < 9)) {
			if (selection == 1)
				Renew_subscription(which_user);
			else if (selection == 7)
				editing(which_user);
			else if (selection == 8)
				break;
			else if (selection == 5)
				Recharging_balance(which_user);
			else if ((selection == 3) || (selection == 4))
				call_message();
			else if (selection == 2)
				changing_package();
			else if (selection == 6)
				Transfer_balance();
		}

	}
	return 0;
}