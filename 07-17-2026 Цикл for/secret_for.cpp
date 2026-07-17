#include <random>
#include <iostream>
#include <chrono>

int main() {
    setlocale(LC_ALL, "ru");
    // Просто важная штука
    std::mt19937 gen(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));
    // Указываем диапазон (1..100 - включительно)
    std::uniform_int_distribution<int> dist(1, 100);
    // Записываем в переменную псевдослучайное число
    unsigned const secret = dist(gen);
    // std::cout << secret << std::endl;
    int user_input = 0;             // Ввод пользователя
    int count = 0;                  // Счётчик попыток
    int max_attempts = 5;           // Макс. число попыток
    std::cout << "Угадайте число, которое загадал компьютер!\n";
    for (; count < max_attempts; count++) {
        std::cout << "Попытка #" << count+1 << ". ";
        std::cout << "Ваш выбор: "; std::cin >> user_input;
        if (user_input == secret) {
            std::cout << "Поздравляем! Вы отгадали число!\n";
            break;
        }
        else {
            if ((max_attempts - count) > 1) {       // если попытка последняя
                (user_input > secret) ?
                    std::cout << "Загаданное число меньше! Попробуйте ещё!\n" :
                    std::cout << "Загаданное число больше! Попробуйте ещё!\n";
            }
        }
    }
    if (count == max_attempts)
        std::cout << "Вы проиграли! Загаданное число: " << secret << std::endl;
    return 0;
}
