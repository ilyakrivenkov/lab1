// lab111.cpp: ���������� ����� ����� ��� ����������� ����������.
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>//��������� ������������
#include <conio.h> //��������� ������������
#include <locale.h>
using namespace std;

int main()
{
setlocale (LC_CTYPE,"rus");
fflush(stdout);
int a[5];
int max, min, n, b;
n=0;
for(int i=0; i<5; i++)
{
printf("������� �������� ������� � %d", i);
printf("\n");
scanf("%d", &n);
a[i]=n;
}
max=a[0];
min=a[0];
for(int i=1;i<5;i++)
{
if(max<a[i])
max=a[i];
if(min>a[i])
min=a[i];
}
printf("�������� = %d", b=max-min);
}