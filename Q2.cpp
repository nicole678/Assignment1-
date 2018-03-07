#include<iostream>
#include<cmath>
using namespace std;
int main() {

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

	return 0;
}