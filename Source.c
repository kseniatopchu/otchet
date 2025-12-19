#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
void main(void)
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n=5;
	printf("Hello world");
	int* ptr = (int*)calloc(n, sizeof(int));
	if (ptr == NULL)
	{
		printf("ошибка выделения памяти");
		return 1;
	}
	printf("Массив из нулей: ")
	for (int i = 0;i < n;i++)
		printf("%5i", ptr[i]);
	free(ptr);
	ptr = NULL;
	return 0;
}
