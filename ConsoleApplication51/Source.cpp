#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
#include <time.h>
#include "Header.h"

char f;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do
	{
		int N;
		printf("Выберите задание");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*1.	Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.*/
			int *pt = NULL;
			pt = (int*)calloc(1, sizeof(int));
			if (pt != NULL)
			{
				printf("Введите число в 2 системе счисления\n");
				scanf("%d", pt);
				DvaV8(pt);
				printf("Число в восмеричной системе счисления %d\n", *pt);
			}
			free(pt);
		}			break;
		case 2:
		{
			/*2.	Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/
			int *pt = NULL;
			pt = (int*)calloc(7, sizeof(int));
			int *pt2 = NULL;
			pt2 = (int*)calloc(9, sizeof(int));
			int *pt3 = NULL;
			pt3 = (int*)calloc(7 + 9, sizeof(int));
			if (pt == NULL || pt2 == NULL || pt3 == NULL)
			{
				exit(0);
			}
			else
			{
				Mass(pt, 7);
				Mass(pt2, 9);
				PrintMass(pt, 7);
				PrintMass(pt2, 9);
				Sort(pt, pt2, pt3, 7, 9);
				sortir(pt3, 7 + 9);
				PrintMass(pt3, 7 + 9);
			}
			free(pt);
			free(pt2);
			free(pt3);
		}
		break;
		case 3:
		{
			int *pt = NULL;
			pt = (int*)calloc(7, sizeof(int));
			if (pt != NULL)
			{
				Mass(pt, 7);
				DvaOdin(pt, 7);
			}
			free(pt);
		}
		break;
		case 4:
		{
			/*3.4.	Задан целочисленный массив. Определить, образуют ли значения его элементов геометрическую прогрессию. Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют». */
			int *pt = NULL;
			pt = (int*)calloc(7, sizeof(int));
			if (pt != NULL)
			{
				Mass(pt, 7);
				Geomerli(pt, 7);

			}
			free(pt);
		}
		break;
		case 5:
		{
			//5.	Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4
			int *pt = NULL;
			pt = (int*)malloc(5 * 4 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 5, 4);
				PrintMass2(pt, 5, 4);
				SortirDvumer(pt, 5, 4);
				PrintMass2(pt, 5, 4);
			}
			free(pt);
		}
		case 6:
		{
			/*6.	В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в первой и третей строке.*/
			int *pt = NULL;
			pt = (int*)malloc(3 * 4 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 3, 4);
				PrintMass2(pt, 3, 4);
				Obmen(pt, 3, 4);
				PrintMass2(pt, 3, 4);

			}
			free(pt);
		}
		break;
		case 7:
		{
			//7.	Дан двухмерный массив 5×6.Определить среднее арифметическое каждого столбца, определить максимум и минимум каждой строки.
			int *pt = NULL;
			pt = (int*)malloc(5 * 6 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 5, 6);
				PrintMass2(pt, 5, 6);
				srednee(pt, 5, 6);
				MaxMin(pt, 5, 6);

			}
			free(pt);

		}
		break;
		case 8:
		{
			/*8.	Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.*/
			int *pt = NULL;
			pt = (int*)malloc(5 * 6 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 5, 6);
				PrintMass2(pt, 5, 6);
				chet(pt, 5, 6);

			}
			free(pt);
		}
		break;
		case 9:
		{
			/*9.	Дан двухмерный массив n ×m элементов. Определить, сколько раз встречается число 7 среди элементов массива.*/
			/*8.	Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве.*/
			int *pt = NULL;
			pt = (int*)malloc(5 * 6 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 5, 6);
				PrintMass2(pt, 5, 6);
				element7(pt, 5, 6);
			}
			free(pt);
		}
		break;
		case 10:
		{
			/*10.	Дан массив из n × m элементов. Найти индексы первого наименьшего  элемента массива*/
			int *pt = NULL;
			pt = (int*)malloc(5 * 6 * sizeof(int));
			if (pt != NULL)
			{
				Mass2(pt, 5, 6);
				PrintMass2(pt, 5, 6);
				Min(pt, 5, 6);
			}
			free(pt);
		}
		break;
		}
		printf("Хотите продоложить y-da\n");
		scanf("%c", &f);
	} while (f=='y');
}