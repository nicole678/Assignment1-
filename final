// CCN2042 Assignment 1
// Program template file: A1Template.cpp
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void showInfo()
{
	// Insert your codes to display your personal particulars here
	cout<<"Name :"<<" LEUNG HOI CHING"<<endl;
	cout<<"Student ID:"<<" 17049070A"<<endl;
	cout<<"Class :"<<"201A"<<endl;
}

void Q1()
{
	// Insert your codes for Question 1 here




	double A, B, a, b, c; //define the variables
	const double pi = 3.1416;
	cin >> A;	//get input 
	cin >> b;	 //get input 
	a = (tan(A*pi / 180)) / b;	//find a
	c = a / sin(A*pi / 180);	//find c
	B = 180 - A - 90;	//find B
	cout << setprecision(3) << a << " " << b << " " << c << " " << A << " " << B; //display the result

	return ;

}

void Q2()
{
	// Insert your codes for Question 2 here




	int num;
	int n;
	int a, b, c, d, e, f, g, h, i;
	int count = 0;

	do {
		cin >> num;
		if (num < 10 || num>999999999) {
			cout << "Error" << endl;
		}
	} while (num < 10 || num>999999999);

	a = num / 100000000;
	b = (num % 100000000) / 10000000;
	c = (num % 10000000) / 1000000;
	d = (num % 1000000) / 100000;
	e = (num % 100000) / 10000;
	f = (num % 10000) / 1000;
	g = (num % 1000) / 100;
	h = (num % 100) / 10;
	i = num % 10;

	while (num > 0) {
		num = num / 10;
		count++;
	}

	switch (count)
	{

	case 2:
		cout << pow(h, 2) - pow(i, 2);
		break;
	case 3:
		cout << pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 4:
		cout << pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 5:
		cout << pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 6:
		cout << pow(d, 2) - pow(e, 2) + pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 7:
		cout << pow(c, 2) - pow(d, 2) + pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 8:
		cout << pow(b, 2) - pow(c, 2) + pow(d, 2) - pow(e, 2) + pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 9:
		cout << pow(a, 2) - pow(b, 2) + pow(c, 2) - pow(d, 2) + pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	}

	return ;
}


void Q3()
{
	// Insert your codes for Question 3 here


	int size; //denfine user input to variable 
	
	do {
		cin >> size; //input size
			if (size < 2 || size > 6) { 
				cout << "Error"<<endl;  //output"Error" when the input out of 2-6
			}
	} while (size < 2 || size > 6);		//while the input out of 2-6 then loop the do body 

	for (int l = 0; l < 1; l++) {		//do once
		cout << endl;

		for (int d = 0 ; d < (size + 4); d++) {  //the 1st of the bottle
			cout << "#";
		}

		cout << endl;

		for (int x = 0; x < 2; x++) {	//the hole of the bottle
			cout << "#" << setw(size + 3) << "#" << endl; 
		}

		for (int b = 0; b < (size + 4); b++) {	//the body of the bottle
			for (int row = 0; row < (size + 4); row++) {
				cout << "#";
			}

			cout << endl;
		}

		cout << right << setw(2);  

		for (int p = 0; p < (size + 2); p++) { //a line 
			cout << "#";
		}

		for (int u = 0; u <size; u++) {   //the last part of bottle(column)
			cout << right << setw(3) << endl; 

				for (int r = 0; r < size; r++) {   //the last part of bottle(row)
					cout << "#";
				}
		}
	}
		cout << endl;

	return ;
}

// GIVEN CODES, DO NOT MODIFY 
// BEGIN
int main()
{
	int prog_choice;

	showInfo();

	do {
		cout << endl;
		cout << "Assignment One - Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "(1) Program One" << endl;
		cout << "(2) Program Two" << endl;
		cout << "(3) Program Three" << endl;
		cout << "(4) Exit" << endl;
		cout << "Enter the choice: ";
		cin >> prog_choice;

		switch (prog_choice) {
		case 1: Q1(); break;
		case 2: Q2(); break;
		case 3: Q3(); break;
		case 4: break;
		default:
			cout << "Please enter choice 1 - 4 only." << endl;
			break;
		}
	} while (prog_choice != 4);

	cout << "Program terminates. Good bye!" << endl;
	return 0 ;
    
}

// END
