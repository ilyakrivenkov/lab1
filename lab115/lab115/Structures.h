#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include <Windows.h>
#include <locale.h>
#define PhamMax 20
#define ImyaMax 20
#define OtchMax 20
#define DateMax 20
#define NumbMax 20
#define AgeMax 20
#define AddressMax 20
#define KolvoLudei 20


typedef char Chelovek;

typedef struct Infaochelovekah
{
	 Chelovek Sname [PhamMax]; // фамилия
	 Chelovek Name[ImyaMax]; //имя
	 Chelovek Tname[OtchMax];//отчество
	 Chelovek Age[AgeMax]; // возраст
	 Chelovek DateOfBirth[DateMax]; //дата рождения
	 Chelovek Tel [NumbMax]; // номер телефона
	 Chelovek Address [AddressMax]; // адрес
	 
	 

}Infa;

typedef struct Kniga
{
	 int count; // Счёт
	 Infa Znach[KolvoLudei];
}Kniga;
