#include <iostream> 
using namespace std;   
class Date {
	int y, m, d;
public:
	void init(int year, int month, int day) //判断日期是否正确 
	{
		int Rm[] = { 1, 3, 5, 7, 8, 10, 12 };
		int Pm[] = { 4, 6, 9, 11 };
		if (!(month > 12 || day > 31 || (month == 2 && day > 29)))
		{
			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			{
				for (int i = 0; i < 7; i++)
				{
					if ((month == Rm[i] && day <= 31) || (month == Pm[i] && day <= 31) || (month == 2 && day <= 29))
					{
						y = year;
						m = month;
						d = day;
					}
				}
			}
			else
			{
				for (int i = 0; i < 7; i++)
				{
					if ((month == Rm[i] && day <= 31) || (month == Pm[i] && day <= 31) || (month == 2 && day <= 28))
					{
						y = year;
						m = month;
						d = day;
					}
				}
			}
		}
		else
			exit(0);
	}
	void print()
	{
		cout << y << " year " << m << " month " << d << " day" << endl;
	}
	int subDate(Date d1)   // 求天数
	{
		y -= d1.y;
		m -= d1.m;
		d -= d1.d;
		return (int)(y * 365 + m * 30 + d);
	}
	Date addNum(int num)    // 距今 年 月 日
	{
		if ((num + d) > 30)   // 天数 进位
		{
			d = num + d - 30; 
			m++;				// 每月天数  ++月份
		}
		else if (m > 12) 
			{ y++; }
		else
			d = num + d;
		return *this;
	}
};
// 输入 年份 回车  月 日
int main() {
	Date d, d1, d2;
	int year, month, day; 
	cout << "请输入日期:\n";
	cin >> year >> month >> day;
	d1.init(year, month, day);
	d1.print();
	d2.init(1998, 3, 16);    // 生日
	cout << d1.subDate(d2) << "天" << endl;
	d = d1.addNum(30);
	d.print();
	system("pause");
	return 0;
}
