#include <iostream> 
#include<iomanip> 
#include <vector> 
#include <algorithm> 
using namespace std; 
//时间类 
class Time 
{ 
	int hour; 
public: 
	Time( int h) 
	{
		hour = h; 
	} };
//日期类 
class Date 
{ 
	int year; 
	int month; 
	int day; 
	Time t; 
public: 
	Date(int y=1900,int m=1,int d=1,int t=0):t(t) 
	{ 
		if(y>12) 
		{ 
			year=y; 
			month=m; 
			day=d;} 
		else 
		{ 
			year=d; 
			month=y; 
			day=m; 
		} 
	}
	int getYear()
	{ 
		return year; 
	}
	int getMonth() 
	{ 
		return month; 
	}
	int getDay() 
	{ 
		return day; 
	}
	friend ostream & operator<<(ostream &os, Date &d); 
	friend bool operator<(Date &d1, Date &d2); 
	friend bool cmpare(Date &d1, Date &d2); };
//重载Date 的< (小于)运算符, 比较日期. 自己定义比较规则 
bool operator<(Date &d1,Date &d2) 
{ 
	if(d1.year!=d2.year) 
		return d1.year<d2.year; 
	else if(d1.month!=d2.month) 
		return d1.month<d2.month; 
	else if(d1.day!=d2.day) 
		return d1.day<d2.day; 
	else
		return false; 
}
//比较大小 
bool cmpare(Date &d1,Date &d2) 
{
	if(d1.year!=d2.year) 
		return d1.year>d2.year; 
	else if(d1.month!=d2.month) 
		return d1.month>d2.month; 
	else if(d1.day!=d2.day) 
		return d1.day>d2.day; 
	else
		return false; 
}
//重载<< 
ostream & operator<<(ostream &os,Date &d) 
{ 
	os<<d.year<<"-"<<setw(2)<<setfill('0')<<d.month<<"-"<<setw(2)<<d.day<<endl; 
	return os; 
}
int main() 
{ 
	//初始化日期 
	Date a(1990,1,1), b(3,5,1990),c; 
	cout<<a<<b<<c; 
	//从键盘读入若干个日期, 放入到数组或向量vector中，用对日期排序输出 
	vector <Date> v1; 
	v1.push_back(Date(1935,2,5)); 
	v1.push_back(Date(1933,2,5)); 
	v1.push_back(Date(1978,2,5)); 
	v1.push_back(Date(1978,3,5)); 
	v1.push_back(Date(1978,5,15));
	v1.push_back(Date(1978, 5, 5)); 
	v1.push_back(Date(1932, 2, 5)); 
	v1.push_back(Date(2000, 3, 5)); 
	v1.push_back(Date(1911, 5, 15)); 
	v1.push_back(Date(2021, 5, 5)); 
	cout << "排序前" << endl; 
	for (vector <Date>::iterator it = v1.begin();it < v1.end();it++) 
	{ 
		cout << it->getYear() << "-" << setw(2) << setfill('0') << it->getMonth() << "-" << setw(2) << it->getDay() << endl; 
	}cout << "排序后" << endl; 
	sort(v1.begin(), v1.end(), cmpare); 
	for (vector <Date>::iterator it = v1.begin();it < v1.end();it++) 
	{ 
		cout << it->getYear() << "-" << setw(2) << setfill('0') << it->getMonth() << "-" << setw(2) << it->getDay() << endl; 
	}
	system("pause"); 
		return 0;
}