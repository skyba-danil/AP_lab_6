#pragma once
#define KILKIST 25

typedef struct kraina
{
	char nazva[25];
	int nasel;
	float plosha;
	char stolica[25];
}kraina;

void ZapownInform();
void PrintStruct();
void SortSpadPlosh();
void SortSpadNasel();
int ZnachNP();
void Vidsotok();
