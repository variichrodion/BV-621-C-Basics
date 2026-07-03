/*
	03.07.2026
	Задание 1. Вывод таблицы истинности
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	// Булевы значения в C++: false, true (ложь, истина)
	// Логические операторы в C++:
	// AND	(И)		: &&
	// OR	(ИЛИ)	: ||
	// NOT  (НЕ)	: !

	// ШАПКА
	std::cout << "=================================================================================\n";
	std::cout << "|\tX\t|\tY\t|\tX AND Y |\tX OR Y  |\tNOT X   |\n";
	std::cout << "=================================================================================\n";
	// СТРОКА 1: X = 0 (false), Y = 0 (false)
	std::cout << "|\t" << false << "\t|\t" << false << "\t|\t"
			  << (false && false) << "\t|\t" << (false || false) << "\t|\t" << (!false) << "\t|\n";
	// СТРОКА 2: X = 0 (false), Y = 1 (true)
	std::cout << "|\t" << false << "\t|\t" << true << "\t|\t"
			  << (false && true) << "\t|\t" << (false || true) << "\t|\t" << (!false) << "\t|\n";
	// СТРОКА 3: X = 1 (true), Y = 0 (false)
	std::cout << "|\t" << true << "\t|\t" << false << "\t|\t"
			  << (true && false) << "\t|\t" << (true || false) << "\t|\t" << (!true) << "\t|\n";
	// СТРОКА 4: X = 1 (true), Y = 1 (true)
	std::cout << "|\t" << true << "\t|\t" << true << "\t|\t"
			  << (true && true) << "\t|\t" << (true || true) << "\t|\t" << (!true) << "\t|\n";
	std::cout << "=================================================================================\n";
	return 0;
}