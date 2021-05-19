#include "stack.h"
#include <iostream>

using namespace std;

int main() {
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.show();
	stack.pop();
	stack.show();
	stack.multiPop(3);
	stack.show();
	cout << "Empty: " << stack.isEmpty() << endl;

	return 0;
}