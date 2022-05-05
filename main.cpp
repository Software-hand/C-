#include<iostream>
using namespace std;
int main() {
	int n, fact=1;
	cout << "input a num : " ;   //这条语句有错，应怎么改？注意cin和cout的区别
	cin >> n;
	cout << fact << "*";
	for (int i = 1;i <= n;i++) {
		fact = fact * i;
	}
	cout << n << "!=" << fact << endl;
	system("pause");
	return 0;
}