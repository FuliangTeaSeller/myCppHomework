#include<bits/stdc++.h>
using namespace std;
bool isR(int year)  {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}
struct Date
{
	int year;
	int month;
	int day;
	Date() :year(0), month(0), day(0) {};
	Date(int year, int month, int day) :year(year), month(month), day(day) {};
	bool isRun() const {
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			return true;
		else
			return false;
	}

	friend istream& operator >> (istream& in, Date& d)
	{
		in >> d.year;
		in.get();
		in >> d.month;
		in.get();
		in >> d.day;
		return in;
	}
	friend ostream& operator << (ostream& out, const Date& d)
	{
		out << d.year << '-';
		if (d.month < 10)
			out << '0';
		out << d.month << '-';
		if (d.day < 10)
			out << '0';
		out << d.day;
		return out;
	}
	//override operator + and - to add Date
	int operator - (const Date& d) {
		int yOfMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int ans = 0;
		for (int i = d.year;i < year;i++)
		{
			if (isR(i))
				ans += 366;
			else
				ans += 365;
		}
		for (int i = 1;i < month;i++)
		{
			ans += yOfMonth[i];
		}
		if (isRun() && month > 2)
			ans++;
		ans += day;
		for (int i = 1;i < d.month;i++)
		{
			ans -= yOfMonth[i];
		}
		if (d.isRun() && d.month > 2)
			ans--;
		ans -= d.day;
		return ans;
	}
};
int main() {
	Date currentDate;
	cin >> currentDate;
	Date originDate(1900, 1, 1);
	vector<string>week = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	cout << week[(currentDate - originDate) % 7];
	return 0;
}
//2017-11-11