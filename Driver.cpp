#include<iostream>
#include"Ant.h"
#include"Butterfly.h"
#include"Locust.h"
#include"Termite.h"

using namespace std;

int printMenu(); //Function that outputs the main menu.
int errorCheck(int); //Function that error checks the users input.

int main() {

	cout << "Devin Miller -- Programming Assignment 8" << endl << endl;

	Insect* array[3]; //Declares a pointer array of three objects
	string order;
	double size;

	for (int i = 0; i < 3; i++) { //Loop that executes three times.
		int selection = printMenu(); //Sets the selection equal to the return value of print menu.
		switch (selection) { //Switch statements for the users selection.
		case 1: //If the user selects 1.
			cout << "Enter the Order associated with the insect you selected: ";
			cin >> order;
			size = ((rand() % 100 - 10) + 1) + (10) / 100.0; //Sets the random number for Ant.
			array[i] = new Ant(order, size); //Passes the order and size to the Ant constructor.
			break;
		case 2: //If the user selects 2.
			cout << "Enter the Order associated with the insect you selected: ";
			cin >> order;
			size = ((rand() % (5000 - 1050) + 1) + (1050)) / 100.0; //Sets the random number for Locust.
			array[i] = new Locust(order, size); //Passes the order and size to the locust constructor.
			break;
		case 3: //If the users selects 3.
			cout << "Enter the Order associated with the insect you selected: ";
			cin >> order;
			size = ((rand() % (7550 - 4000) + 1) + (4000)) / 100.00; //Sets the random number for Butterfly.
			array[i] = new Butterfly(order, size);//Passes the order and size to the Butterfly constructor.
			break;
		case 4: //If the user selects 4.
			cout << "Enter the Order associated with the insect you selected: ";
			cin >> order;
			size = ((rand() % (550 - 150) + 1) + (150)) / 100.0; //Sets the random number for Termite.
			array[i] = new Termite(order, size); //Passes the order and size to the Termite constructor.
			break;
		default: //If the user inputs a number other than 1, 2, 3, or 4.
			cout << "Invalid selection. Please try again." << endl;
			break;
		}

	}

	for (int i = 0; i < 3; i++) { //Points the array to the eat function.
		array[i]->eat();
		cout << endl;
	}

	for (int i = 0; i < 3; i++) { //Deletes the contents of the array once the program is finished.
		delete array[i];
	}

	system("pause"); //Program ends.
	return 0;
}

int printMenu() { //Function that prints out the main menu.
	int selection;
	cout << "Main Menu" << endl << endl;
	cout << "1 - Ant" << endl << endl;
	cout << "2 - Locust" << endl << endl;
	cout << "3 - Butterfly" << endl << endl;
	cout << "4 - Termite" << endl << endl;
	cout << "Enter selection: ";
	cin >> selection;
	selection = errorCheck(selection);

	return selection;
}

int errorCheck(int selection) { //Function that error checks the users selection 
	if (cin.fail() || selection < 1 || selection > 4) {
		if (cin.fail()) { //If the user enters something other than a number.
			cout << "You must enter a number. Please try again: ";
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
		}
		else if (selection < 0) { //If the number is negative.
			cout << "You cannot enter a negative number. Please try again: ";
		}
		else if (selection < 1 && selection > 0) { //If the number is less than 1 but greater than 0.
			cout << "You must enter a number greater than 0. Please try again: ";
		}
		else if (selection > 4) { //If the number is greater than 4.
			cout << "You cannot enter a number greater than 4. Please try again: ";
		}
		cin.clear();
		cin >> selection;
	}

	return selection;
}