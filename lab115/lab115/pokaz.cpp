#include "pokaz.h"
void pokaz(Kniga* ludi)
{
	system("chcp 1251 > nul");
	if (ludi == NULL)
	{
		printf("�������� ����� ����� \n");
		return;
	}
	if (ludi->count == 0)
	{
		printf("�������� ����� �����! \n");
	}
	int i = 0;
	for (; i <= ludi->count - 1; ++i)
	{
		printf("�������:%s\n", ludi->Znach[i].Sname);
		printf("���:%s\n", ludi->Znach[i].Name);
		printf("��������:%s\n", ludi->Znach[i].Tname);
		printf("�������:%s\n", ludi->Znach[i].Age);
		printf("���� ��������:%s\n", ludi->Znach[i].DateOfBirth);
		printf("�������� �������:%s\n", ludi->Znach[i].Tel);
		printf("����c� ����������:%s\n", ludi->Znach[i].Address);
		printf("\n");
	}
	printf("\n");
}