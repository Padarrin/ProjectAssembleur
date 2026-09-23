// ProjectAssembleur.cpp : définit le point d'entrée de l'application.
//

#include "ProjectAssembleur.h"

extern "C" 
{
	int64_t asm_add(int64_t a, int64_t b);

	int64_t asm_mul(int64_t a, int64_t b);

	int64_t asm_sub(int64_t a, int64_t b);

	int64_t asm_div(int64_t a, int64_t b);
}

using namespace std;

int main()
{
	cout << "1 + 2 = " << asm_add(1, 2) << endl;
	cout << "--------------------" << endl;
	cout << "2 - 3 = " << asm_sub(2, 3) << endl;
	cout << "--------------------" << endl;
	cout << "2 * 3 = " << asm_mul(2, 3) << endl;
	cout << "--------------------" << endl;
	cout << "6 / 3 = " << asm_div(6, 3) << endl;
	cout << "--------------------" << endl;
	return 0;
}
