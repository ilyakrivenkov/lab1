#include "filtr.h"
int filtr(Kniga* ludi) {
	setlocale(LC_ALL, "Rus");
	assert(ludi); //�������� �������� ludi
	char sname[20];
	char name[20];
	int a;
	int i = 0;
	printf(" 1)���\n 2)�������\n�������� ���� ��� ����������:");
	scanf("%d", &a);
	switch (a)
	{
	case 2: 
		fflush(stdin);
		printf("������� ������� ��� ����������:");
		scanf("%s", sname);
	for (i = 0; i < ludi->count; i++)
	{
		if (strstr(ludi->Znach[i].Sname, sname) != NULL)
		{
			printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", ludi->Znach[i].Sname, ludi->Znach[i].Name, ludi->Znach[i].Tname, ludi->Znach[i].DateOfBirth, ludi->Znach[i].Age, ludi->Znach[i].Tel, ludi->Znach[i].Address);
			printf("\n");
		}
	}
	case 1: 
		fflush(stdin);
		printf("������� ��� ��� ����������:");
		scanf("%s", name);
	for (i = 0; i < ludi->count; i++)
	{
		if (strstr(ludi->Znach[i].Name, name) != NULL)
		{
			printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", ludi->Znach[i].Sname, ludi->Znach[i].Name, ludi->Znach[i].Tname, ludi->Znach[i].DateOfBirth, ludi->Znach[i].Age, ludi->Znach[i].Tel, ludi->Znach[i].Address);
			printf("\n");
		}
	}
	return -1; //����������� � ����� ������ �������
	}
}

