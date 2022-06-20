/*
﻿Даны два списка чисел, которые могут содержать до 100000 чисел каждый. Посчитайте, сколько чисел содержится одновременно 
как в первом списке, так и во втором.
*/

#include <iostream>
#include <set>
int main() {
	std::set <int> s;
	std::multiset <int> n;
	int x, y;
	std::cin >> x;
	for (int i = 0; i < x; i++) {
		int k;
		std::cin >> k;
		s.insert(k);
		n.insert(k);
	}
	std::cin >> y;
	for (int i = 0; i < y; i++) {
		int z;
		std::cin >> z;
		s.insert(z);
		n.insert(z);
	}
	std::cout << n.size() - s.size();
}
