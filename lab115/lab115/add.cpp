#include "Structures.h"
#include "add.h"
void add(Kniga* ludi)
{
	system("chcp 1251 > nul");
	assert(ludi); //�������� �������� ludi
	int i = 0;
	if (ludi->count > KolvoLudei)
	{
		printf("�������� ����� ��������� \n");
		return;
	}
	printf("����������, ������� ���� ���: \n");
	scanf("%s%s%s", (ludi->Znach[ludi->count]).Sname, (ludi->Znach[ludi->count]).Name, (ludi->Znach[ludi->count]).Tname);
	printf("����������, ������� ���� ���� ��������: \n");
	scanf("%s", (ludi->Znach[ludi->count]).DateOfBirth);
	printf("����������, ������� ��� �������: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Age);
	printf("����������, ������� ��� �������� �������: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Tel);
	printf("����������, ������� ���� �����: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Address);
	printf("����� �������� ��������! \n");
	ludi->count++;
	printf("count = %d\n", ludi->count);

}