#include "Sort.h"

int createarr(int *arr, int size, int *diapaz)
{
	
	cout << "Enter diapazon for arr" << endl;
		cin >> *diapaz;
		system("cls");
	for (int i = 0; i < size;i++) {
		
		*(arr+i) = rand() % *diapaz;
		

	}

	cout << endl;
	


	return 0;
}

int showarr(int *arr, int size, int *diapaz)
{
	for (int i = 0; i < size; i++) {

		
		cout << *(arr+i) << " ";

	}
	cout << endl;
	return 0;
}

int disivedelement(int* arr, int size, int* diapaz)
{
	int element = 0;
	cout << "Enter namber->";
	cin >> element;
	for (int i = 0; i < size; i++) {
		if (element == *(arr+i)) {
			cout << i << endl;
		}
		
	}


	return 0;
}

int sortarr(int* arr, int size, int* diapaz)
{

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (*(arr+j) > *(arr+j + 1) ){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j + 1);
				*(arr+j + 1) = temp;
				
			}
          
		}
		
	}
	cout << endl;

	return 0;
}

int midle(int* arr, int size, int* diapaz)
{
	int sum=0;
	int mile=0;

	for (int i = 0; i < size; i++)
    {
		sum += *(arr + i);
	}
	cout << "Midle=" << sum / 100 << endl;
	return 0;
}

int cratne_5(int* arr, int size, int* diapaz)
{
	int count=0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) % 5 == 0) {
			count++;
		}

	}
	cout << "Kratne 5=" << count << endl;
	return 0;
}
