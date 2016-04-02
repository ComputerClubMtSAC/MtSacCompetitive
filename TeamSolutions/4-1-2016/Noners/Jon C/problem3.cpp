#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
	char a;
	std::string item = "";
	std::vector<int> list, dict;
	while (std::cin >> a) {
		if (a >= '0' && a <= '9')
			item += a;
		if (a == '=') break;
	}
	int start_digit = 0;
	while (start_digit < list.size()) {
		item = "";
		if (list[start_digit] != '0') {
			for (int x = start_digit; x < list.size(); x++) {
				item += list[x];
				dict.push_back(atoi(item.c_str()));

			}
		}
		start_digit++;
	}





	system("pause");
	return 0;
}