#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>

void bubbleSort(int* arrayPtr, int length_array)
{
	int temp = 0;
	bool exit = false;

	while (!exit)
	{
		exit = true;
		for (int int_counter = 0; int_counter < (length_array - 1); int_counter++)
			if (arrayPtr[int_counter] > arrayPtr[int_counter + 1])
			{
				temp = arrayPtr[int_counter];
				arrayPtr[int_counter] = arrayPtr[int_counter + 1];
				arrayPtr[int_counter + 1] = temp;
				exit = false;
			}
	}
}


int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	/*
	2.	Ввести два массива действительных чисел, состоящих из 7 и  9 элементов.
	Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.
	*/

	/*int a[7] = { 0 }, b[9] = { 0 }, c[16];
	printf("Массив длинною 7 элементов: \n");
	for (size_t i = 0; i < 7; i++)
	{
		a[i] = 1 + rand() % 50;
		c[i] = a[i];
	}
	for (size_t i = 0; i < 7; i++)
	{
		printf("%d\n", a[i]);
	}

	printf("Массив длинною 9 элементов: \n");
	for (size_t i = 0; i < 9; i++)
	{
		b[i] = 1 + rand() % 50;
		c[i + 7] = b[i];
	}
	for (size_t i = 0; i < 9; i++)
	{
		printf("%d\n", b[i]);
	}

	bubbleSort(c, 16);
	printf("Массив длинною 16 элементов: \n");
	for (size_t i = 0; i < 16; i++)
	{
		printf("%d\n", c[i]);
	}*/

	/*
	3.	Ввести массив, в котором только два одинаковых элемента.
	Определить их местоположение.
	*/

	/*int a[20] = { 0 };
	for (size_t i = 0; i < 20; i++)
	{
		a[i] = 1 + rand() % 50;
		printf("%d;;\n", a[i]);
	}
	bubbleSort(a, 20);
	printf("Упорядоченный: \n");
	for (size_t i = 0; i < 20; i++)
	{
		printf("%d\n", a[i]);
	}*/

	/*
	8.	Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.
	*/

	/*int x[5][4] = { 0 }, n = 0, m = 0;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
		if ((x[i][j] % 2 == 0) && (x[i] < 0) && (x[i] > 0))
			n = n + 1;
		if (x[i][j] % 2 < 0 && x[i][j]> 0)
			m  = m + 1;
		}
	}
	printf("Четных : %d Нечетных : %d",n, m);*/

	/*int x[3][4] = { 0 }, k = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			x[i][j] = 1 + rand() % 10;
			printf("%d\n", x[i][j]);
			if (x[i][j] == 7)
			{
				k++;
			}
		}
	}
	printf("Число 7 встречается в массиве %d раз(а)\n", k);*/

	/*
	10.	Дан массив из n × m элементов. 
	Найти индексы первого наименьшего  элемента массива
	*/

	/*int x[5][4] = { 0 }, min, k, l;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			x[i][j] = 1 + rand() % 40;
			printf("%d\n", x[i][j]);
		}
	}
	min = x[1][1];
	k = 1; l = 1;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if (min > x[i][j])
			{
				min = x[i][j];
				k = i;
				l = j;
			}
		}
	}
	printf("­ Индексы первого наименьшего элемента = %d , %d" , k, l);*/

	system("pause");
	
}