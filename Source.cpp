#include<iostream>
#include "Sort.h"

using namespace std;

int main() {

	const int size = 100;
	int arr[size];
	int diapaz=0;
	int a;
	do {
		cout << "1.Random arr" << endl;
		cout << "2.Show arr" << endl;
		cout << "3.Find index" << endl;
		cout << "4.Sort" << endl;
		cout << "5.Fint midle" << endl;
		cout << "6.Kratne 5" << endl;
		cout << "7.Exit" << endl;
		cout << "Selekt funktion->";
		cin >> a;
		switch (a)
		{
		case 1:
			createarr(arr, size, &diapaz);
			
			break;
		case 2:
			showarr(arr, size, &diapaz);
			
			break;

		case 3:
			disivedelement(arr, size, &diapaz);
			
			break;
		case 4:
			sortarr(arr, size, &diapaz);
			showarr(arr, size, &diapaz);
			
			break;
		case 5:
			midle(arr, size, &diapaz);
			
				break;
		case 6:
			cratne_5(arr, size, &diapaz);
			break;
		case 7:
			cout << "Bye" << endl;
			break;
		}
		

	} while (a != 7);

}