#include <iostream>
using namespace std;

int factorial(int n);
long long power(int number, int exponent);

//const int ROWS = 3;
//const int COLS = 4;

//void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
//void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
//void FillRand(int arr[][COLS], const int ROWS, const int COLS);
//
//void Print(int arr[], const int n);
//void Print(double arr[], const int n);
//void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
//
//void Sort(int arr[], const int n);
//int Sum(int arr[], const int n);
//double Average(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int number;
	int exponent;
	cout << "������� �����: "; cin >> number;
	cout << "��������� �����: " << number << " = " << factorial(number) << endl;
	cout << "������� �������� �������: "; cin >> exponent;
	cout << "������� �����: " << power(number, exponent);


	/*const int n = 5;
	int arr[n];
	FillRand(arr, n, 0, 100);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������-��������������: " << Average(arr, n) << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);*/
}

	int factorial(int n)
	{
		int result = 1;
		for (int i = 2; i <= n; i++)
		{
			result *= i;
		}
		return result;
	}

	long long power(int number, int exponent)
	{
		int result = 1;
		for (int i = 0; i < exponent; i++)
		{
			result *= number;
		}
		return result;
	}

//void FillRand(int arr[], const int n, int minRand, int maxRand)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (maxRand - minRand) + minRand;
//	}
//}
//
//void FillRand(double arr[], const int n, int minRand, int maxRand)
//{
//	minRand * 100;
//	maxRand * 100;
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = rand() % (maxRand - minRand) + minRand;
//		arr[i] /= 100;
//	}
//}
//
//void FillRand(int arr[][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arr[i][j] = rand() % 100;
//		}
//	}
//}
//
//
//void Print(int arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//
//void Print(double arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//
//void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//
//void Sort(int arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				int buffer = arr[i];
//				arr[i] = arr[j];
//				arr[j] = buffer;
//			}
//		}
//	}
//}
//
//int Sum(int arr[], const int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//double Average(int arr[], const int n)
//{
//	return (double)Sum(arr, n) / n;
//}

