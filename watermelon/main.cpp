#include <iostream>
using namespace std;

int main() {
	int i;
	cin >> i;

	if(i % 2 == 0 && i / 2 != 1) {
		cout << "YES";
	} 
	else {
		cout << "NO";
	}
}