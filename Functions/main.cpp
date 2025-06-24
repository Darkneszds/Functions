#include <iostream>
using namespace std;

int Add(int a, int b); //прототип фунции или же объявление функции - (Functio declaration) включает в себя заголовок функции и заканчивается точкой с запятой предназачен для того, чтобы имя функции её список принимемых параметров и тип возращаемого значения были известны на момент вызова
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	
	int c = Add(a, b); //использование функции (определение функции - Function call)

	/*int value_1 = 5, value_2 = 3;
	cout << Add(value_1, value_2) << endl;*/
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	
}

int Add(int a, int b) //реализация функции (определение функции или же Function definition)состоит из заголовка и тела функции
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtracktion = Вычитание
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