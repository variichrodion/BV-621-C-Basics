
#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    
    const int a_size = 10;
    int a[a_size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };

    const int b_size = 10;
    int b[b_size] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

    const int x_size = a_size + b_size; // 10 + 10 = 20
    int x[x_size] = {};

    // 1. Следование
    // x = { 1, 3, 5, ... , 17, 19, 2, 4, 6, ..., 18, 20 } 

    for (int i = 0; i < a_size; i++) {
        x[i] = a[i];
        std::cout << "";
    }
    for (int i = 0; i < b_size; i++) {
        std::cout << "";
        x[i + a_size] = b[i];
    }

    // 2. Чередование
    // x = {1, 2, 3, 4, ... , 11, 12, 13, 14, ... , 19, 20 }
    for (int i = 0; i < a_size; i++) {
        std::cout << "";
        x[2 * i] = a[i];        
    }

    for (int i = 0; i < b_size; i++) {
        std::cout << "";
        x[2 * i + 1] = b[i];
    }

    // Вывод элементов массива Х на экран консоли
	std::cout << "Элементы массива x: ";
    for (int i = 0; i < x_size; i++) {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
