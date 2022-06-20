/*
Дана строка, содержащая пробелы. Найдите, сколько в ней слов 
(слово – это последовательность непробельных символов, слова разделены одним пробелом, первый и последний символ строки – не пробел).
*/

#include <iostream>
#include <string>
int main() {
    int count = 1;
    std::string n;
    std::getline(std::cin, n);
    for (size_t i = 0; i < n.length(); i++) {
        if (n[i] == ' ') count++;
    }
    std::cout << count;
}