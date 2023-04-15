#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	double caculateAverage()
	{
		double sum = 0;
		for (int i = 0; i < 6; i++)
		{
			sum += score[i];
		}
		return sum / 6;
	}
	double caculateVariance()
	{
		double average = caculateAverage();
		double sum = 0;
		for (int i = 0; i < 6; i++)
		{
			sum += pow((score[i] - average), 2);
		}
		return sum / 6;
	}
	//override << and >>
	friend istream& operator >>(istream& is, Solution& s)
	{
		s.score.resize(6);
		for (int i = 0;i < 6;i++)
		{
			is >> s.score[i];
		}
		return is;
	}

	friend ostream& operator <<(ostream& os, Solution& s)
	{
		os << s.caculateAverage() << ' ' << s.caculateVariance() << endl;
		return os;
	}
private:
	vector<int>score;
};
int main()
{
	int n;
	cin >> n;
	while (n--) {
		Solution tmp;
		cin >> tmp;
		cout << tmp;
	}
	system("pause");
	return 0;
}