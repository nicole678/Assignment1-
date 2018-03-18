// CCN2042 Assignment 1
// Program template file: A1Template.cpp
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void
showInfo()
{
	// Insert your codes to display your personal particulars here
	cout << "Name      :" << " LEUNG HOI CHING" << endl;
	cout << "Student ID:" << " 17049070A" << endl;
	cout << "Class     :" << " 201A" << endl;
}

void
Q1()
{
	// Insert your codes for Question 1 here
	double A, b;						 //define the variables
	const double pi = 3.1416;			 //define pi = 3.1416 be a double constant

	cin >> A;							 //get input for A
	cin >> b;							 //get input for b

	if ((A < 0 || A > 90) || b <= 0)	 //check the input whether A < 0 or A > 90 or b <= 0 
	{
		cout << endl << "Error" << endl; //if A < 0 or A > 90 or b <= 0 output
	}

	else
	{
		cout << fixed << setprecision(3);

		cout << (tan(A * pi / 180))*b << endl;		//find a and display a
		cout << b << endl;							//display b 
		cout << b / (cos(A * pi / 180)) << endl;	//find and display c
		cout << A << "¢X" << endl;					//display A
		cout << 180 - A - 90 << "¢X" << endl;		//find and display B
	}
	return;
}

void
Q2()
{
	// Insert your codes for Question 2 here
	int num;							//define the variable to be num
	int a, b, c, d, e, f, g, h, i;		//define the variables to be num a, b, c, d, e, f, g, h, i
	int count = 0;						//set the value count to count how many digits

	do
	{
		cin >> num;								//get input num 

		if (num < 10 || num > 999999999)		//check the num < 10 or num > 999999999
		{
			cout << "Error" << endl;			//if num < 10 or num > 999999999 then output "Error"
		}

	} while (num < 10 || num > 999999999);		//loop

												//formula of calculate each digits inputed by user 
	a = num / 100000000;
	b = (num % 100000000) / 10000000;
	c = (num % 10000000) / 1000000;
	d = (num % 1000000) / 100000;
	e = (num % 100000) / 10000;
	f = (num % 10000) / 1000;
	g = (num % 1000) / 100;
	h = (num % 100) / 10;
	i = (num % 10) / 1;

	//to  calculate how many digit
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	//use switch to follow the rule according to the digits number
	switch (count)
	{

	case 2:
		cout << h << endl << i << endl;
		cout << pow(h, 2) - pow(i, 2);
		break;
	case 3:
		cout << g << h << endl << i << endl;
		cout << pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 4:
		cout << f << endl << g << endl << h << endl << i << endl;
		cout << pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 5:
		cout << e << endl << f << endl << g << endl << h << endl << i << endl;
		cout << pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 6:
		cout << d << endl << e << endl << f << endl << g << endl << h << endl << i << endl;
		cout << pow(d, 2) - pow(e, 2) + pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 7:
		cout << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl << i << endl;
		cout << pow(c, 2) - pow(d, 2) + pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	case 8:
		cout << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl << i << endl;
		cout << pow(b, 2) - pow(c, 2) + pow(d, 2) - pow(e, 2) + pow(f, 2) - pow(g, 2) + pow(h, 2) - pow(i, 2);
		break;
	case 9:
		cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl << g << endl << h << endl << i << endl;
		cout << pow(a, 2) - pow(b, 2) + pow(c, 2) - pow(d, 2) + pow(e, 2) - pow(f, 2) + pow(g, 2) - pow(h, 2) + pow(i, 2);
		break;
	}
	return;
}


void
Q3()
{
	// Insert your codes for Question 3 here
	int size;							//denfine the variable to be num

	do
	{
		cin >> size;					//get input for size

		if (size < 2 || size > 6)		//check the size value whether size< 2 or size > 6 
		{
			cout << "Error" << endl;	//output "Error" when size< 2 or size > 6 
		}

	} while (size < 2 || size > 6);		//loop

	for (int l = 0; l < 1; l++)			//do once
	{
		cout << endl;

		for (int d = 0; d < (size + 4); d++)	//the 1st line of the bottle
		{
			cout << "#";
		}

		cout << endl;

		for (int x = 0; x < 2; x++)				//the hole of the bottle
		{
			cout << "#" << setw(size + 3) << "#" << endl;
		}

		for (int b = 0; b < (size + 4); b++)	//the body of the bottle
		{
			for (int row = 0; row < (size + 4); row++)
			{
				cout << "#";
			}

			cout << endl;

		}

		cout << right << setw(2);

		for (int p = 0; p < (size + 2); p++)	//a line
		{
			cout << "#";
		}

		for (int u = 0; u < size; u++)			//the last part of bottle(column)
		{
			cout << right << setw(3) << endl;

			for (int r = 0; r < size; r++)		//the last part of bottle(row)
			{
				cout << "#";
			}
		}
	}
	cout << endl;

	return;
}

// GIVEN CODES, DO NOT MODIFY 
// BEGIN
int
main()
{
	int prog_choice;

	showInfo();

	do
	{
		cout << endl;
		cout << "Assignment One - Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "(1) Program One" << endl;
		cout << "(2) Program Two" << endl;
		cout << "(3) Program Three" << endl;
		cout << "(4) Exit" << endl;
		cout << "Enter the choice: ";
		cin >> prog_choice;

		switch (prog_choice)
		{
		case 1:
			Q1();
			break;
		case 2:
			Q2();
			break;
		case 3:
			Q3();
			break;
		case 4:
			break;
		default:
			cout << "Please enter choice 1 - 4 only." << endl;
			break;
		}
	} while (prog_choice != 4);

	cout << "Program terminates. Good bye!" << endl;
	return 0;

}

// END
