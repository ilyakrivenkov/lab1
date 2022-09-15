#include "poisk.h"
int poisk(Kniga* ludi)
{
	setlocale(LC_ALL, "Rus");
	assert(ludi); //проверка значения ludi
	char pham[50];
	printf("Введите вашу фамилию: \n");
	scanf("%s", pham);
	int i = 0;
	for (; i < ludi->count; ++i)
	{
		if (strcmp(ludi->Znach[i].Sname, pham) == 0)
		{
			printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n", ludi->Znach[i].Sname, ludi->Znach[i].Name, ludi->Znach[i].Tname, ludi->Znach[i].DateOfBirth, ludi->Znach[i].Age, ludi->Znach[i].Tel, ludi->Znach[i].Address);
			return i;
			printf("Нижний индекс% d \n", i);
		}
	}
	printf("Запись не найдена! \n");
	return -1;
}