#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b;
    double result;
    char operation;

    std::cout << "Введите два числа (через пробел): ";
    std::cin >> a >> b;

    std::cout << "Введите арефметическое действие:\n(+, -, *, /, максимум = M, минимум = m): ";
    std::cin >> operation;

    switch (operation) {
        case '+': 
            result = a + b;
            std::cout << "Ответ: " << result << '\n';
            break;
        case '-':
            result = a - b;
            std::cout << "Ответ: " << result << '\n';
            break;
        case '*':
            result = a * b;
            std::cout << "Ответ: " << result << '\n';
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                std::cout << "Ответ: " << result << '\n';
            }
            else
                std::cout << "Ошибка! Деление на ноль!" << '\n';
            break;
        case 'M':
            if (a > b)
                std::cout << "Ответ: " << a << '\n';
            else
                std::cout << "Ответ: " << b << '\n';
            break;
        case 'm':
            if (a < b)
                std::cout << "Ответ: " << a << '\n';
            else
                std::cout << "Ответ: " << b << '\n';
            break;
        default:
            std::cout << "Операция не существует\n";
            break;
    }
    return 0;
}