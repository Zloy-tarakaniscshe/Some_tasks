/*
Отсортируйте массив.
*/

#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    for (auto now : a) {
        std::cout << now << " ";
    }
}