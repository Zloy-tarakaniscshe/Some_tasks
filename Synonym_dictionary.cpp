/*
Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. 
Все слова в словаре различны. Для одного данного слова определите его синоним.
*/

#include <iostream>
#include <map>
#include <string>
int main() {
	std::map <std::string, std::string> s, s1;
	int pair;
	std::cin >> pair;
	std::string x, y, z;
	for (int i = 0; i < pair; i++) {
		std::cin >> x >> y;
		s.insert({ x, y });
		s1.insert({ y, x });
	}
	std::cin >> z;
	std::cout << ((s.find(z) != s.end()) ? s[z] : s1[z]);
}