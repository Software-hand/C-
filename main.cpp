#include <iostream>
using namespace std;
void print(float year = 0, char sex = 'M') {
	cout << int(year + 0.5) << " years old, ";
	cout << (sex == 'M' || sex == 'm' ? "male" : "female") << endl;
}
void print(char sex, float year) {
	cout << int(year + 0.5) << " years old, ";
	cout << (sex == 'M' || sex == 'm' ? "male" : "female") << endl;
}
int main() {
	char sex; float year;
	cin >> year >> sex;
	print(year, sex);
	print(sex, year);
	print();
	return 0;
}