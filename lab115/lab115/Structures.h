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
	 Chelovek Sname [PhamMax]; // �������
	 Chelovek Name[ImyaMax]; //���
	 Chelovek Tname[OtchMax];//��������
	 Chelovek Age[AgeMax]; // �������
	 Chelovek DateOfBirth[DateMax]; //���� ��������
	 Chelovek Tel [NumbMax]; // ����� ��������
	 Chelovek Address [AddressMax]; // �����
	 
	 

}Infa;

typedef struct Kniga
{
	 int count; // ����
	 Infa Znach[KolvoLudei];
}Kniga;
