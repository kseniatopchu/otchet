#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main(void)
{
	setlocale(LC_ALL, "rus");
	int num;
	printf("¬веди число дл€ вывода слова: ");
	scanf_s("%i", &num);
	printWord(num);
}
