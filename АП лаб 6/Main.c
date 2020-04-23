#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

extern kraina inform[KILKIST];

int k;

int main()
{
	system("chcp 1251");
	ZnachNP();
	ZapownInform();
	PrintStruct();
	SortSpadPlosh();
	PrintStruct();
	SortSpadNasel();
	PrintStruct();
	Vidsotok();
	getchar(); getchar();
	return 0;
}

void ZapownInform()
{
	getchar();

	while (1)
	{
		printf("%2d. ������ �����: ", k + 1);
		gets_s(inform[k].nazva, 25);
		if (inform[k].nazva[0] == '\0') break;
		printf("������ ������� ���������: ");
		scanf_s("%d", &inform[k].nasel);
		printf("������ �����: ");
		scanf_s("%f", &inform[k].plosha);
		printf("������ ����� �������: ");
		getchar();
		gets_s(inform[k].stolica, 25);
		k++;
	}
}

void PrintStruct()
{
	for (int i = 0; i < k; i++)
	{
		printf("\n%10s| %10i| %10.2f| %10s", inform[i].nazva, inform[i].nasel, inform[i].plosha, inform[i].stolica);
	}
}

