#include <random>
#include <chrono>
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    // Просто важная штука
    std::mt19937 gen(static_cast<unsigned>(std::chrono::steady_clock::now().time_since_epoch().count()));
    // Указываем диапазон (1..10 - включительно)
    std::uniform_int_distribution<int> dist(-15, 5);

    // Массив значений температуры за январь
    const int arr_size = 5;
    int arr[arr_size];
    
    // Инициализация массива и вывод температуры
    for (int i = 0; i < arr_size; i++) {
        arr[i] = dist(gen);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 1. Средняя температура за январь
    
    double avr_temp = 0.0;
    for (int i = 0; i < arr_size; i++) {
        avr_temp += arr[i];
    }

    // Делим на кол-во дней (размер массива) arr_size = 31
    std::cout << "Средняя температура в январе: " << avr_temp / arr_size << std::endl;
    
    // 2. Сколько раз температура опускалась ниже указанной метки

    int days = 0;
    const int metka = -2;

    for (int i = 0; i < arr_size; i++) {
        if (arr[i] < metka)
            days++;     // прибавляем день, если температура была меньше метки
    }

    std::cout << days << std::endl;

    return 0;
}
