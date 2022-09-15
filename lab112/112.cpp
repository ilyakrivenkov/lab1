// lab112.cpp: определяет точку входа для консольного приложения.
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>//директива препроцесора
#include <conio.h> //директива препроцесора
#include <locale.h>
#include <stdio.h>
#include <time.h>
using namespace std;

#include <stdio.h>
 
int main()
{
	srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    printf("массив: \n");
	int i;
	int a[5];
    for (int i = 0; i < 5; i++){
		a[i] = rand()%100;
		printf("%d", a[i]);
		printf("\n");
	}
}