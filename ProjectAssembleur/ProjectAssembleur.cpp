// ProjectAssembleur.cpp : définit le point d'entrée de l'application.
//

#include "ProjectAssembleur.h"

extern "C" 
{
	int64_t asm_add(int64_t a, int64_t b);

	int64_t asm_sub(int64_t a, int64_t b);

	int64_t asm_mul(int64_t a, int64_t b);

	int64_t asm_div(int64_t a, int64_t b);
}

using namespace std;

void add(int64_t a, int64_t b)
{
	system("cls");
	cout << " " << a << " + " << b << " = " << asm_add(a, b) << endl;
}

void sub(int64_t a, int64_t b)
{
	system("cls");
	cout << " " << a << " - " << b << " = " << asm_sub(a, b) << endl;
}

void mult(int64_t a, int64_t b)
{
	system("cls");
	cout << " " << a << " * " << b << " = " << asm_mul(2, 3) << endl;
}

void divide(int64_t a, int64_t b)
{
	system("cls");
	cout << " " << a << " / " << b << " = " << asm_div(a, b) << endl;
}

void testMaths()
{
	cout << "Tests fonctions de maths : \n--------------------" << endl;
	add(1, 2);
	cout << "--------------------" << endl;
	sub(2, 3);
	cout << "--------------------" << endl;
	mult(2, 3);
	cout << "--------------------" << endl;
	divide(6, 3);
	cout << "--------------------" << endl;
}

void calculator()
{
	int math;
	int64_t a;
	int64_t b;

	cout << "Choisir un calcul : \n Addition (1)\n Soustraction (2)\n Multiplication (3)\n Division (4)" << endl;
	cin >> math;
	
	system("cls");

	cout << " Première valeur :" << endl;
	cin >> a;
	cout << endl;

	cout << " Deuxème valeur :" << endl;
	cin >> b;


	switch (math)
	{
	case 1:
		add(a, b);
		break;

	case 2:
		sub(a, b);
		break;

	case 3:
		mult(a, b);
		break;

	case 4:
		divide(a, b);
		break;

	default:
		break;
	}
}

int main()
{
	calculator();

	return 0;
}
