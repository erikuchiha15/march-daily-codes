#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int input = 64;
	vector<int> numbers;
	vector<int> ::iterator i;

	while (input != 0) {
		cin >> input;
		numbers.push_back(input);
	}

	sort(numbers.begin(), numbers.end());

	for (i = numbers.begin(); i < numbers.end(); i++) {
		cout << *i << endl;
	}
	system("pause");
}