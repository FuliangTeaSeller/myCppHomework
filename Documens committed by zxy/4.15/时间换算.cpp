#include<bits/stdc++.h>
using namespace std;
struct Time {
	int hour;
	int minute;
	Time(int hour, int minute)
		:hour(hour)
		, minute(minute)
	{}
	Time() {}
	static string myReverse(string s) {
		reverse(s.begin(), s.end());
		return s;
	}
	Time operator - (const Time& t) const
	{
		int h = hour - t.hour;
		int m = minute - t.minute;
		if (m < 0)
		{
			h--;
			m += 60;
		}
		if (h < 0)
		{
			h += 24;
		}
		return { h,m };
	}
	friend istream& operator >>(istream& is, Time& t) {
		string tmp;
		is >> tmp;
		reverse(tmp.begin(), tmp.end());
		if (tmp.size() <= 2) {
			t.hour = 0;
			t.minute = stoi(myReverse(tmp));
		}
		else
		{
			t.hour = stoi(myReverse(tmp.substr(2)));
			t.minute = stoi(myReverse(tmp.substr(0, 2)));
		}
		return is;
	}
	friend ostream& operator <<(ostream& os, Time& t) {
		if (t.hour == 0) {
			os << t.minute;
		}
		else {
			os << t.hour;
			if (t.minute < 10)
			{
				os << 0;
				os << t.minute;
			}
			else {
				os << t.minute;
			}
		}
		return os;
	}
};
int main()
{
	Time bjt;
	cin >> bjt;
	Time dif(8, 0);
	Time ans = bjt - dif;
	cout << ans << endl;
	return 0;
}