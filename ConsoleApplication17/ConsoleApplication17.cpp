#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

	int sum = 0;
	for (int i = 1; i < 6; i++)
	{
		sum = sum + pow(2, i) * a;
	}
	float y;
	y = 3.56 + sum;
	return y;
}

int main()
{
	int a, n = 5;
	cout << "Enter a =";
	cin >> a;
	float rez;
	rez = Sum(a, n);
	cout << setw(10) << setprecision(3) << "Y= " << rez << endl;

}
