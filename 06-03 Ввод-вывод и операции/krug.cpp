/*
	03.07.2026
	Задание 3. Вычисление площади и длины окружности по радиусу
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	// 1. ПЕРЕМЕННАЯ ДЛЯ ХРАНЕНИЯ ВХОДНЫХ ДАННЫХ ПОЛЬЗОВАТЕЛЯ
	double radius = 0.0;	// радиус

	// 2. ПЕРЕМЕННЫЕ ДЛЯ ХРАНЕНИЯ РЕЗУЛЬТАТОВ ВЫЧИСЛЕНИЙ
	double square = 0.0;	// площадь
	double circle = 0.0;	// длина

	// 3. КОНСТАНТА
	double const PI = 3.14159;

	// 4. ВВОД ПОЛЬЗОВАТЕЛЯ
	std::cout << "Введите радиус окружности: ";
	std::cin >> radius;

	// 5. ВЫЧИСЛЕНИЯ
	square = PI * radius * radius;
	circle = 2 * PI * radius;

	// 6. ВЫВОД
	std::cout << "Площадь окружности: " << square << std::endl;
	std::cout << "Длина окружности:   " << circle << std::endl;

	return 0;
}