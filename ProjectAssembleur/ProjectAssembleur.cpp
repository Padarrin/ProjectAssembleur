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
	cout << " " << a << " + " << b << " = " << asm_add(a, b) << endl;
}

void sub(int64_t a, int64_t b)
{
	cout << " " << a << " - " << b << " = " << asm_sub(a, b) << endl;
}

void mult(int64_t a, int64_t b)
{
	cout << " " << a << " * " << b << " = " << asm_mul(2, 3) << endl;
}

void divide(int64_t a, int64_t b)
{
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

int main()
{
	testMaths();

	return 0;
}
