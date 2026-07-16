// 17-07-2026
// Программа выводит таблицу умножения

#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    
    for (int i = 0; i <= 10; i++) {         // Цикл для последовательного
        if (i == 0)                         // вывода строк таблицы
            std::cout << ' ';               // i == 0 - шапка
        else
            std::cout << i;
        for (int j = 1; j <= 10; j++) {     // Цикл для вывода содержимого строки
            if (i == 0)                     // i == 0 - шапка
                std::cout << '\t' << j;
            else
                std::cout << '\t' << i*j;
        }
        std::cout << std::endl;
    }

    return 0;
}