// lab113.cpp: определяет точку входа для консольного приложения.
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>//директива препроцесора
#include <conio.h> //директива препроцесора
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
    setlocale(LC_ALL, "Rus");
	int i, n,m, **a, j;
    printf("Введите число количества значений в массиве: ");
	printf("\n");
	scanf("%d", &n);
	scanf("%d", &m);
    a = (int **) malloc(n * m * sizeof(int *));
    
    for(i = 0; i < n; ++i)
        a[i] = (int *) malloc(m * sizeof(int));
    
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            a[i][j] = rand()%100;
    
    printf("Массив : \n");
    
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < m; ++j)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

}

