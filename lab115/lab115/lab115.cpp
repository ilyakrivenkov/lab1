#define _CRT_SECURE_NO_WARNINGS
#include "Structures.h"
#include "filtr.h"
#include "add.h"
#include "pokaz.h"
#include "chistka.h"
#include "poisk.h"
#include <locale.h>


void menu()
{
	setlocale(LC_ALL, "Rus");
	printf("+------------------------------— Меню —--------------------------+\n");
	printf("+Номер +---------------------------------------------------------+\n");
	printf("+  1   +---Добавить                                              +\n");
	printf("+  2   +---Найти                                                 +\n");
	printf("+  3   +---Вывести на экран                                      +\n");
	printf("+  4   +---Очистить                                              +\n");
	printf("+  5   +---Фильтр                                                +\n");
	printf("+  0   +---Выход из программы                                    +\n");
	printf("+----------------------------------------------------------------+\n");
}

int main()
{
	_asm
	{
	}
	Kniga ludi;
	chistka(&ludi);
	while (1)
	{
		menu();
		int n = 0;
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			add(&ludi);
			break;
		case 2:
			poisk(&ludi);
			break;
		case 3:
			pokaz(&ludi);
			break;
		case 4:
			chistka(&ludi);
			break;
		case 5:
			filtr(&ludi);
			break;
		case 0:
			exit(0);
		default:
		{
			printf("Ошибка \ n");
			break;
		}
		}
	}
	return 0;
}