#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int size;
	string input;
	vector<string> inputList;
	cin >> size;
	for(int i = 0; i < size; ++i) {
		cin >> input;
		inputList.push_back(input);
	}
	for(string input : inputList) {
		if(input.size() > 10) {
			input.replace(1, input.size()-2, to_string(input.size() - 2));
		}

		cout << input << '\n';
	}

}