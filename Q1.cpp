#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {

	double A, B, a, b, c; //define the variables
	const double pi = 3.1416;
	cin >> A;	//get input 
	cin >> b;	 //get input 
	a = (tan(A*pi / 180)) / b;	//find a
	c = a / sin(A*pi / 180);	//find c
	B = 180 - A - 90;	//find B
	cout << setprecision(3) << a << " " << b << " " << c << " " << A << " " << B; //display the result

	return 0;
}


