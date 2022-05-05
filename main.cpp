#include <iostream>
using namespace std;
class Complex { private: int real, image;
	public: 
		Complex(); 
		~Complex();
		void init(int r, int i);
		friend Complex operator-(Complex& a, Complex& b);
		friend Complex operator<<(ostream& cout, Complex& a);
};
Complex::Complex() 
	{}
Complex::~Complex()
	{}
void Complex::init(int r, int i)
{ 
	real = r; 
	image = i; 
}
Complex operator-(Complex& a, Complex& b)
	{ 
	Complex temp; temp.real = a.real - b.real; 
	temp.image = a.image - b.image; 
	return temp; 
}
Complex operator<<(ostream& cout, Complex& a) 
{ 
	cout << "(" << a.real << "," << a.image << ")" << endl; 
	return a;
}

int main() {
	Complex c1, c2, c3;
	int r, i;
	cout << "输入两个复数，第二个减去第一个";
	cout << "\n input first, r and i :"; 
	cin >> r >> i;
	c1.init(r, i); 
	cout << "\n input second, r and i :"; 
	cin >> r >> i; 
	c2.init(r, i); 
	c3 = c2 - c1; 
	cout << c3; 
	system("pause"); 
	return 0;
}
