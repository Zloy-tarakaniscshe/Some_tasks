/*
Дано натуральное число n > 1. Выведите его наименьший делитель, отличный от 1.
Решение оформите в виде функции MinDivisor(n). Количество операций в программе должно быть пропорционально корню из n.
Указание. Если у числа n нет делителя, меньшего n , то число n — простое и ответом будет само число n.
*/

#include <iostream>
#include <cmath>
int MinDivisor(int n) {
    int x = 0;
    for (int i = sqrt(n); i > 1; i--) { 
        if (n % i == 0) x = i; 
    }
    return (x != 0) ? x : n;
}
int main() {
    int n;
    std::cin >> n;
    std::cout << MinDivisor(n);
}