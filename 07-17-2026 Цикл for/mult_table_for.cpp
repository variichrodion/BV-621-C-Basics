// 15-07-2026
// Программа выводит таблицу умножения

#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    
    for (int i = 0; i <= 10; i++) {
        if (i == 0)
            std::cout << ' ';
        else
            std::cout << i;
        for (int j = 1; j <= 10; j++) {
            if (i == 0)
                std::cout << '\t' << j;
            else
                std::cout << '\t' << i*j;
        }
        std::cout << std::endl;
    }

    return 0;
}