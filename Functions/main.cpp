#include <iostream>
using namespace std;

int Add(int a, int b); //�������� ������ ��� �� ���������� ������� - (Functio declaration) �������� � ���� ��������� ������� � ������������� ������ � ������� ����������� ��� ����, ����� ��� ������� � ������ ���������� ���������� � ��� ������������ �������� ���� �������� �� ������ ������
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	
	int c = Add(a, b); //������������� ������� (����������� ������� - Function call)

	/*int value_1 = 5, value_2 = 3;
	cout << Add(value_1, value_2) << endl;*/
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	
}

int Add(int a, int b) //���������� ������� (����������� ������� ��� �� Function definition)������� �� ��������� � ���� �������
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtracktion = ���������
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}