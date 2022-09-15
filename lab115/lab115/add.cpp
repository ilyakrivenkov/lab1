#include "Structures.h"
#include "add.h"
void add(Kniga* ludi)
{
	system("chcp 1251 > nul");
	assert(ludi); //проверка значения ludi
	int i = 0;
	if (ludi->count > KolvoLudei)
	{
		printf("Адресная книга заполнена \n");
		return;
	}
	printf("Пожалуйста, введите ваше фио: \n");
	scanf("%s%s%s", (ludi->Znach[ludi->count]).Sname, (ludi->Znach[ludi->count]).Name, (ludi->Znach[ludi->count]).Tname);
	printf("Пожалуйста, введите вашу дату рождения: \n");
	scanf("%s", (ludi->Znach[ludi->count]).DateOfBirth);
	printf("Пожалуйста, введите ваш возраст: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Age);
	printf("Пожалуйста, введите ваш домашний телефон: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Tel);
	printf("Пожалуйста, введите свой адрес: \n");
	scanf("%s", (ludi->Znach[ludi->count]).Address);
	printf("Новый участник добавлен! \n");
	ludi->count++;
	printf("count = %d\n", ludi->count);

}