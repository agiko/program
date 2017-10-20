#include <stdio.h>

int mnoz(int a, int b){
	printf("wynik mnozenia: %i\n", a * b);
	return a * b; }
int dodaj (int a, int b){
	printf("wynik dodawania: %i\n", a + b);
	return a + b; }
int dziel (int a, int b){
	printf("wynik dzielenia: %i\n", a / b);
	return a / b; }
int odejmij (int a, int b){
	printf("wynik odejmowania: %i\n", a -b);
	return a - b; }

int main(void)
{
	int a = 33, b = 11;
	char wybor ;
	scanf("%c", &wybor);
	if(wybor == '*'){
	mnoz (a, b);
	}
	else if(wybor == '/'){
	dziel (a, b);
	}
	else if(wybor == '+'){
	dodaj (a, b);
	}
	else if(wybor == '-'){
	odejmij (a, b);
	}
	return 0;
}

