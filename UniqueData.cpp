/*
Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.
*/

#include <iostream>
#include <set>
int main() {
    std::set <int> s;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        s.insert(x);
    }
    std::cout << s.size() << " ";
}