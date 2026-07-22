#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    
    const int a_size = 5;
    int a[a_size] = { 1,2,3,4,5 };
    int b[a_size] = {};
    int shift = 2;
    for (int i = 0; i < a_size; i++) {
        (i + shift < a_size) ?
            b[i + shift] = a[i] :
            b[i + shift - a_size] = a[i];
    }

    for (int i = 0; i < a_size; i++)
        std::cout << b[i] << ' ';

    return 0;
}
