//Задание 3.*3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a; //Добавляем переменную
	printf("a = "); scanf("%d", &a); //Вводим значение переменной

	//Расчёты
	a = a * a;		//a^2, 1 операция
	a = a * a * a;	//a^6, 3 операции

	printf("a в степени 6 равно %d\n", a); //Вывод полученного значения
	
	return 0;
}
