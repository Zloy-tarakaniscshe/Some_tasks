/*
Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, 
есть ли среди них пара бьющих друг друга.
Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
*/

#include <iostream>
#include <vector>
int main() {
    int aa, bb;
    std::vector<int> a;
    std::vector<int> b;
    for (int i = 0; i < 8; ++i) {
        std::cin >> aa >> bb;
        a.push_back(aa);
        b.push_back(bb);
    }
    for (int i = 0; i < a.size() - 1; ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            if (abs(a[i] - a[j]) == abs(b[i] - b[j]) || (a[i] == a[j]) || (b[i] == b[j])) {
                std::cout << "YES";
                return 0;
            }
        }
    }
    std::cout << "NO";
}
