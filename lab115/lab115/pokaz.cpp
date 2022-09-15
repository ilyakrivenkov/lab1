#include "pokaz.h"
void pokaz(Kniga* ludi)
{
	system("chcp 1251 > nul");
	if (ludi == NULL)
	{
		printf("Адресная книга пуста \n");
		return;
	}
	if (ludi->count == 0)
	{
		printf("Адресная книга пуста! \n");
	}
	int i = 0;
	for (; i <= ludi->count - 1; ++i)
	{
		printf("Фамилия:%s\n", ludi->Znach[i].Sname);
		printf("Имя:%s\n", ludi->Znach[i].Name);
		printf("Отчество:%s\n", ludi->Znach[i].Tname);
		printf("Возраст:%s\n", ludi->Znach[i].Age);
		printf("Дата рождения:%s\n", ludi->Znach[i].DateOfBirth);
		printf("Домашний телефон:%s\n", ludi->Znach[i].Tel);
		printf("Адреcс проживания:%s\n", ludi->Znach[i].Address);
		printf("\n");
	}
	printf("\n");
}