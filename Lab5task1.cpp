// Лабораторная работа №5 Задача 1 Вариант 9
//
// Задачу 1 решите через массив char.
// 
// Дана строка длиной не более 100 символов. Посчитать количество букв в ней.

#include <iostream>
#include <Windows.h>

const int string_length = 100;

bool isLetter(char symbol) {
	if ((symbol >= -64 && symbol <= -33) ||
		(symbol >= -32 && symbol <= -1) ||
		(symbol >= 97 && symbol <= 122) ||
		(symbol >= 65 && symbol <= 90) ) return true;
	return false;
}

int main()
{
	setlocale(LC_ALL, "Rus"); 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char string[string_length] = "Дана строка длиной не более 100 символов. Посчитать количество букв в ней.";
	int letters = 0;
	
	for (int i = 0; i < string_length; i++) if (isLetter(string[i])) letters++;

	std::cout << letters << std::endl;
}