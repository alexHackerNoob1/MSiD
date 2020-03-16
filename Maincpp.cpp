#include <iostream>
#include "Sorting.h"
using namespace std;
void printArr(double *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	Sorting s;
	double* arr = new double[3];
	arr[0] = 9;
	arr[1] = 89;
	arr[2] = 10.4;
	//printArr(s.selectionSort(arr, 3), 3);
	
	s.bubbleSort(arr, 3);
	printArr(arr, 3);
	system("pause");
	return 0;
}