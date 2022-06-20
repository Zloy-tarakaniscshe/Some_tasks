// Найдите в данной строке самое длинное слово и выведите его.

#include <iostream>
#include <string>
int main() {
    std::string s, si, p;
    std::getline(std::cin, s);
    s = s + ' ';
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            si = si + s[i];
        }
        else {
            if (si.length() > p.length()) {
                p = si;
            }
            si.clear();
        }
    }
    std::cout << p;
}