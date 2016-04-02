#include <iostream>
#include <sstream>
#include <string>
#include <map>

int main() {
	int a, cases = 0;
	bool first = true;
	bool valid_tree;
	int count_roots;
	std::map<int,int> pointing_to, pointed_to;
	std::map<int,int>::iterator it;
	std::string result = "";
	while (std::cin >> a) {
		if (a == -1) break;
		if (first == true) {
			if (pointing_to.find(a) == pointing_to.end()) {
				pointing_to.insert(std::pair<int,int>(a, 1));
			} else {
				++pointing_to[a];
			}
			first = false;
		} else {
			if (pointed_to.find(a) == pointed_to.end()) {
				pointed_to.insert(std::pair<int,int>(a, 1));
			} else {
				++pointed_to[a];
			}
			first = true;
		}
		if ((pointing_to[0] == pointed_to[0]) && pointing_to[0] > 0) {
		//evaluate
			valid_tree = true;
			count_roots = 0;
			for (it = pointed_to.begin(); it != pointed_to.end(); ++it) {
				//every number pointed to at most once
				if (it->second > 1)
					valid_tree = false;
			}
			for (it = pointing_to.begin(); it != pointing_to.end(); ++it) {
				if (pointed_to.find(it->first) == pointed_to.end()) {
					//can't find nodes that point to other nodes and aren't pointed back == root
					count_roots++;
				}
			}
			if (count_roots == 1 && valid_tree == true) {
				result += "Case " + std::to_string(++cases) + " is a tree.\n";
			}
			else {
				result += "Case " + std::to_string(++cases) + " is not a tree.\n";
			}
			pointed_to.clear();
			pointing_to.clear();
		}
	}
	std::cout << result;

	system("pause");
	return 0;
}