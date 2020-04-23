#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

kraina inform[KILKIST];

static int np;

extern k;

void SortSpadPlosh()
{
	printf("\nСортування по спаду площі:\n");
	kraina buf;
	for (int j = k; j > 0;j--)
	{
		for (int i = k; i > 0; i--)
		{
			if (inform[i].plosha > inform[i - 1].plosha)
			{
				buf = inform[i - 1];
				inform[i - 1] = inform[i];
				inform[i] = buf;
			}
		}
	}
}

void SortSpadNasel()
{
	printf("\nСортування по спаду населення:\n");
	kraina buf;
	for (int j = k; j > 0;j--)
	{
		for (int i = k; i > 0; i--)
		{
			if (inform[i].nasel > inform[i - 1].nasel)
			{
				buf = inform[i - 1];
				inform[i - 1] = inform[i];
				inform[i] = buf;
			}
		}
	}
}

int ZnachNP()
{
	printf("Введіть зачення NP: ");
	scanf_s("%i", &np);
	return np;
}

void Vidsotok()
{
	double kilk = 0;
	for (int i = 0;i < k;i++)
	{
		if (inform[i].nasel > np)
		{
			kilk++;
		}
	}
	printf("\nВідсоток країн більше NP: %.1f%\n", (kilk / k) * 100.);
}