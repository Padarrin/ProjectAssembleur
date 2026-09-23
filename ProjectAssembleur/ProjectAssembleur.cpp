// ProjectAssembleur.cpp : définit le point d'entrée de l'application.
//

#include "ProjectAssembleur.h"

extern "C" 
{
	int64_t asm_add(int64_t a, int64_t b);

	int64_t asm_mul8(int64_t a);

	int64_t asm_find(int64_t tab[], int64_t size, int64_t find);
}

using namespace std;

int main()
{
	int64_t size = 4;
	int64_t tab[] = { 4, 2, 8, 6 };

	cout << "2 + 1 = " << asm_add(1, 2) << endl;
	cout << "--------------------" << endl;
	cout << "2 * 8 = " << asm_mul8(2) << endl;
	cout << "--------------------" << endl;
	cout << asm_find(tab, size, 6) << endl;
	cout << "--------------------" << endl;
	return 0;
}
