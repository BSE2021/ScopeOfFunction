#include <iostream>
#include <cstring>
using namespace std;

void greet_someone(string greeting) {
	//string greeting = "from someone function";
	cout << greeting; //local scope
}
	int main() {

		string greeting = "from main function";
		greet_someone(greeting);
		cout << "\n" <<greeting;
	}
