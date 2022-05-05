// 根据注释语句的提示，实现类Date的成员函数。

#include <iostream> 
using namespace std;
class Point {
int x, y; public: void init(int a, int b)
{
	x = a; y = b;
}
void disp()
{
	cout << x << " " << y << endl;
}
Point add(Point& p)
{
	Point p1; 
	p1.x = x + p.x; 
	p1.y = y + p.y; 
	return p1;
}
Point operator+(Point& p)
{
	Point p1; 
	p1.x = x + p.x; 
	p1.y = y + p.y; 
	return p1;
}
	friend Point operator+(const Point& a, const Point& b);
};

Point operator+(const Point& a, const Point& b)
{
	Point p1;
	p1.x = a.x + b.x;
	p1.y = a.y + b.y;
	return p1;
};
int main()
{
	Point a, b, c;
	a.init(1, 2);
	b.init(3, 4);
	c = a + b;
	c.disp();
	system("pause");
	return 0;
}

/*
#include <iostream>
using namespace std;
class Complex { private: int real, image;
	public: Complex(); ~Complex();
		  void init(int r, int i);
		  friend Complex operator-(Complex& a, Complex& b);
		  friend Complex operator<<(ostream& cout, Complex& a);
};
					Complex::Complex() {}
					Complex::~Complex()
					{}
					void Complex::init(int r, int i)
					{ real = r; image = i; }
					Complex operator-(Complex& a, Complex& b)
					{ Complex temp; temp.real = a.real - b.real; temp.image = a.image - b.image; return temp; }
					Complex operator<<(ostream& cout, Complex& a) { cout << "(" << a.real << "," << a.image << ")" << endl; }

int main() {
	Complex c1, c2, c3;
	int r, i;
	cout << "\n input first, r and i :"; cin >> r >> i;
	*/
