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
	int a , b;
	char wybor;
	int czy_dalej = 1;

	while(czy_dalej ==1){
 
	printf("Podaj wartosc argumentu a: "); scanf("%i", &a);
	printf("Podaj wartosc argumentu b: "); scanf("%i", &b);
	printf("Podaj dzialania: "); scanf(" %c", &wybor);

	licz(a, b, wybot);

	printf("czy dalej chcesz liczyc) (1 - tak /0 - nie");

	if(wybor == '*'){
	mnoz (a, b);
	}else if(wybor == '/'){
	dziel (a, b);
	}else if(wybor == '+'){
	dodaj (a, b);
	}else if(wybor == '-'){
	odejmij (a, b);
	}else  puts("Nieznam dzialania");
	return 0;
}

