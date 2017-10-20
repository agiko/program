#include <stdio.h>

int mnoz(int a, int b)
	{
	return a * b; }
int dodaj (int a, int b)
	{
	return a + b; }
int dziel (int a, int b)
	{
	return a / b; }
int odejmij (int a, int b)
	{
	return a - b; }

int main(void)
{
	int a = 33, b = 11; 
	char wybor ;
	scanf("%c", &wybor);
	if(wybor == '*'){
	printf("wynik mnozenia: %i\n" , mnoz (a, b));
	}
	else if(wybor == '/'){
	printf("wynik dzielenia: %i\n" , dziel (a, b));
	}
	else if(wybor == '+'){
	printf("wynik dodawania: %i\n" , dodaj (a, b));
	}
	else if(wybor == '-'){
	printf("wynik odejmowania: %i\n" , odejmij (a, b));
	}
	return 0;
}

