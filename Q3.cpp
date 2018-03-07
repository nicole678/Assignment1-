#include<iostream>
#include<iomanip>
using namespace std;
int main() {

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
	system("Pause");
	return 0;
}
