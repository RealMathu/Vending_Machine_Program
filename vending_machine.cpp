/*
Made by: Mathushanth Srikanthan
Date: 2021-05-03
Descirption: In this program, I use a combination of SWITCH and IF statements to simulate a vending machine.
*/


#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
	
	int option;
	int confrim;
	float money;
	float change;


	//This part of the program greets the user to the vending machine and asks the user to input the amount of money they have
	cout << " *****************************" << endl;
	cout << " Mathushanth's Vending Machine" << endl;
	cout << " *****************************" << endl << endl;
	cout << "Welcome to our vending machine. Please enter the amount of money you have." << endl;
	cout << "$";
	cin >> money;

	//This if statement checks if the user has entered a valid amount of money
	if (money > 0) {
		cout << "Please choose from one of the following options" << endl;
		cout << "1)Coke\n2)Diet Coke\n3)Sprite\n4)Nestea\n5)Dr.pepper\n6)Water\n";
		cin >> option;
	}
	else {
		cout << "You have not entered in any money, goodbye." << endl;
		return 0;
	}

	//This switch statement goes though different cases based on the option the user has selected
	switch (option) {
		case 1:
			cout << "You have selected Coke" << endl;
			cout << "Price: $2.00" << endl;
			
			//confirms with the user if they want to buy the product
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;
		    
			//checks if the user has confrimed to buy the product
			if (confrim == 1) {
				// check if the user has enough money to buy the product
				if (money >= 2) {
					// if the user has enough money it will subract the cost of the product and give the user the balance.
					change = money - 2;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
		case 2:
			cout << "You have selected Diet Coke" << endl;
			cout << "Price: $2.00" << endl;
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;

			if (confrim == 1) {
				if (money >= 2) {
					change = money - 2;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
		case 3:
			cout << "You have selected Sprite" << endl;
			cout << "Price: $2.00" << endl;
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;

			if (confrim == 1) {
				if (money >= 2) {
					change = money - 2;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
		case 4:
			cout << "You have selected Nestea" << endl;
			cout << "Price: $2.00" << endl;
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;

			if (confrim == 1) {
				if (money >= 2) {
					change = money - 2;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
		case 5:
			cout << "You have selected Dr.pepper" << endl;
			cout << "Price: $2.50" << endl;
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;

			if (confrim == 1) {
				if (money >= 2.50) {
					change = money - 2.50;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
		case 6:
			cout << "You have selected Water" << endl;
			cout << "Price: $1.00" << endl;
			cout << "Would you like yo confrim?\n1=yes\n2=no" << endl;
			cin >> confrim;

			if (confrim == 1) {
				if (money >= 1) {
					change = money - 1;
					cout << "Your balance is $" << change << "." << endl;
					cout << "Thank you" << endl;
					return 0;
				}
				else {
					cout << "Sorry you don't have enough money to buy this product" << endl;
					return 0;
				}
			}
			else {
				cout << "No worries have a nice day" << endl;
				return 0;
			}
			break;
			// This is a default case the will run if the value the user entered for drink selection does not match the any of the cases. 
		default:
			cout << "The option you have selected is not available" << endl;
			cout << "Goodbye." << endl;
			break;
	}


}