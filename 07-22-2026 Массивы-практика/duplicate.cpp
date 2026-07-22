#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    
    const int a_size = 10;
    int a[a_size] = { 4, 6, 3, 4, 9, 6, 4, 3, 10, 10 };  // 4, 6, 3, 10
                //    0  1  2  3  4  5  6  7   8   9

    for (int i = 0; i < a_size - 1; i++) {
        bool already_checked = false;   // уже проверено
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                already_checked = true;
                break;
            }                
        }
        if(already_checked == true)
            continue;       
        for (int j = i + 1; j < a_size; j++) {
            if (a[i] == a[j]) {
                std::cout << a[i] << ' ';
                break;
            }
        }
    }

    return 0;
}
