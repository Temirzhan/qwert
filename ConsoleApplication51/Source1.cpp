#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <iostream>
#include <time.h>



void DvaV8(int *pt)
{
	int temp2=0;
	int Vosem;
	int count = 1;
	while (*pt!=0)
	{
		Vosem = *pt % 1000;
		*pt /= 1000;
		switch (Vosem)
		{
		case 0:
		{
			count*=10;
		}
			break;
		case 1:
		{
			temp2 += 1 * count;
			count *= 10;
		}
		break;
		case 10:
		{
			temp2 += 2 * count;
			count *= 10;
		}
		break;
		case 11:
		{
			temp2 += 3 * count;
			count *= 10;
		}
		break;
		case 100:
		{
			temp2 += 4 * count;
			count *= 10;
		}
		break;
		case 101:
		{
			temp2 += 5 * count;
			count *= 10;
		}
		break;
		case 110:
		{
			temp2 += 6 * count;
			count *= 10;
		}
		break;
		case 111:
		{
			temp2 += 7 * count;
			count *= 10;
		}
		break;

		}
	}
	*pt = temp2;
}
void Mass2(int *pt,int len,int len2)
{
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
		 *(pt + i*len + j)=1+rand()%1000;
		}
	}
}
void Mass(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		*(pt + i) = 1 + rand() % 100;
	}
}
void PrintMass(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *(pt + i));
	}
	printf("---------\n");
}
void PrintMass2(int *pt, int len, int len2)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			printf("%d\t", *(pt + i*len + j));
		}
		printf("\n");
	}
	printf("-------------------\n");
}
void Sort(int *pt, int *pt2, int *pt3, int len, int len2)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		*(pt3 + count) = *(pt + i);
		count++;
	}
	for (int i = 0; i < len2; i++)
	{
		*(pt3 + count) = *(pt2 + i);
		count++;
	}
}

void sortir(int *pt, int len)
{
	int temp;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (*(pt + j) < *(pt + j - 1))
			{
				temp = *(pt + j);
				*(pt + j) = *(pt + j - 1);
				*(pt + j - 1) = temp;
			}
		}

	}
}


void DvaOdin(int *pt, int len)
{
	int i1=0;
	int i2=0;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (*(pt + i) == *(pt + j))
			{
				i1 = i;
				i2 = j;
			}
		}
	}
	if (i1 == 0 && i2 == 0)
	{
		printf("Нет таких");
	}
	else
	{
		printf("Первый %d второй %d ", i1, i2);
	}
}

void Geomerli(int *pt, int len)
{
	int t = *(pt + 1) / (*(pt + 0));
	for (int i = 1; i < len - 1; i++)
	{
		if (*(pt + i + 1) / (*(pt + i) != t))
		{
			printf("Не геометр\n");
			exit(1);
		}
	}
	printf("Геметр\n");
}

void SortirDvumer(int *pt, int len, int len2)
{
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (*(pt + j * len + 3) < *(pt +(j-1)*len+ 3 ))
			{
				temp = *(pt + j * len+ 3);
				*(pt + j * len + 3) = *(pt + (j-1)  * len + 3);
				*(pt + (j - 1) * len + 3) = temp;
			}
		}

	}
}


void Obmen(int *pt, int len, int len2)
{
	int min1 = *pt;
	int i1, i2;
	int min2 = *(pt + 2 * len);
	for (int i = 0; i < len2; i++)
	{
		if (*(pt + 0 * len + i) < min1)
		{
			min1 = *(pt + 0 * len + i);
			i1 = i;
		}
		if (*(pt + 2 * len + i) < min2)
		{
			min2 = *(pt + 2 * len + i);
			i2 = i;
		}
	}
	*(pt + 2 * len + i2) = min1;
   *(pt  + i1)=min2 ;
}

void srednee(int *pt, int len, int len2)
{
	int summ = 0;
	for (int j = 0; j < len2; j++)
	{
		for (int i = 0; i < len - 1; i++)
		{
			summ += *(pt + i*len + j);
		}
		printf("Среднее арифметическое %d столбца =%d\n", len2, summ / len);
		summ = 0;
	}
}

void MaxMin(int *pt, int len, int len2)
{
	int max = 0;
	int min = 99999;
	for (int j = 0; j < len; j++)
	{
		for (int i = 0; i < len2 - 1; i++)
		{
			if (max < *(pt + j*len + i))
				max = *(pt + j*len + i);
			if (min > *(pt + j*len + i))
				min = *(pt + j*len + i);
		}
		printf("меньшее =%d  максимальное =%d  %d строки\n", min,max,j );
		max = 0;
		min = 9999;
	}
}
void chet(int *pt, int len, int len2)
{
	int Nechetsumm = 0;
	int chetsumm=0;
	for (int j = 0; j < len2; j++)
	{
		for (int i = 0; i < len - 1; i++)
		{
			if(*(pt + i*len + j)%2!=0)
			Nechetsumm ++;
			if (*(pt + i*len + j) % 2 == 0)
				chetsumm++;
		}
	}
	printf("Сумма нечет %d сумма чет =%d", Nechetsumm, chetsumm);
}
void element7(int *pt, int len, int len2)
{
	int chetsumm = 0;
	for (int j = 0; j < len2; j++)
	{
		for (int i = 0; i < len - 1; i++)
		{
			if (*(pt + i*len + j) == 7)
				chetsumm++;

		}
	}
	printf("Сумма 7 =%d",  chetsumm);
}
void Min(int *pt, int len, int len2)
{
	int min = 99999;
	for (int j = 0; j < len; j++)
	{
		for (int i = 0; i < len2 - 1; i++)
		{
			if (min > *(pt + j*len + i))
				min = *(pt + j*len + i);
		}
	}
	printf("меньшее =%d  ", min);
}