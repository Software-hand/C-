#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int t;
	t = a;  a = b;  b = t;
}
int main() {
	int a = 1, b = 6;
	cout << "before swap:\n" << "a is:" << a << "  b is:" << b << endl;
	swap(a, b);
	cout << "after  swap:\n" << "a is:" << a << "  b is:" << b << endl;
	return 0;
}