/*
2.3.1 实验内容 类基本语法练习
	改写程序，要求：
	①将数据成员改为私有的；
	②将输入和输出的功能改为由成员函数实现；
	③在类体内定义成员函数。
	然后编译和运行程序。请分析什么成员应指定为公用的?什么成员应指定为私有的? 什么函数最好放在类中定义? 什么函数最好在类外定义?
	
*/

#include <iostream> 
using namespace std; 
class Time // 定义Time类 
{
private:// 数据成员为私有的 
	int hour; 
	int minute; 
	int sec; 
public: // 数据成员、成员函数为公用的 
	void input(); 
	void output(); 
};
void Time::input() 
{ 
	cin >> hour >> minute >> sec; 
}
void Time::output() 
{ 
	cout << hour << ":" << minute << ":" << sec << endl; 
}

// 输入 时分秒
int main() 
{
	Time t1; //定义t1为Time类对象 
	t1.input(); //输入设定的时间 
	t1.output(); 
	system("pause"); 
	return 0; } 

