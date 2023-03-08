#include<iostream>
#include<Windows.h>
#include<conio.h>
using std::cin;
using std::cout;
using std::endl;
//#define PERVIY
//#define KVADRAT_S_PARI
//#define LESTNICA
//#define DVA
//#define PLUS_MINUS
//#define ROMBUS
void main()
{

	setlocale(LC_ALL, "");
#ifdef PERVIY
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;

	}
#endif // PERVIY
#ifdef KVADRAT_S_PARI

	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "* ";
		cout << endl;

	}
#endif // KVADRAT_S_PARI
#ifdef LESTNICA
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)

			cout << "*";
		cout << endl;
	}
#endif // LESTNICA
#ifdef DVA
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "* ";
		cout << endl;


	}
#endif // DVA
#ifdef PLUS_MINUS
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		{
			for (int j = 0; j < n; j++)
				if (i % 2 == j % 2)cout << "+ "; else cout << "- ";

		}
		cout << endl;



	}
#endif // PLUS_MINUS
#ifdef ROMBUS
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}

#endif // ROMBUS
	
	





	}
		
	
	

	
	
