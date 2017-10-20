#include <stdio.h>

int mnoz(int a, int b){
	return a * b;
}

int main(void)
{

	int wynik;

	wynik = mnoz(4,5);


	printf("wynik mnozenia: %i\n" , wynik);
	return 0;
}
