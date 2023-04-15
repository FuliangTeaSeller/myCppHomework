#include<bits/stdc++.h>
using namespace std;
struct Student {
	string name;
	double dailyPerformance;
	double finalGrade;
	double totalGrade;
	Student(string name, int dailyPerformance, int finalGrade, int totalGrade)
		:name(name), dailyPerformance(dailyPerformance), finalGrade(finalGrade), totalGrade(dailyPerformance * 0.4 + finalGrade * 0.6)
	{}
	Student() {}
	//override << and >>
	friend istream& operator >>(istream& is, Student& stu)
	{
		is >> stu.name >> stu.dailyPerformance >> stu.finalGrade;
		stu.totalGrade = stu.dailyPerformance * 0.4 + stu.finalGrade * 0.6;
		return is;
	}
	friend ostream& operator <<(ostream& os, const Student& stu)
	{
		os << stu.name << ' ' << stu.dailyPerformance << ' ' << stu.finalGrade << ' ' << stu.totalGrade;
		return os;
	}
	bool operator <(const Student& rhs) const
	{
		return this->totalGrade < rhs.totalGrade;
	}
	bool operator >(const Student& rhs) const
	{
		return this->totalGrade > rhs.totalGrade;
	}
};
int main()
{
	vector<Student>v;
	Student tmp;
	while (cin >> tmp) {
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater<Student>());
	for (const auto& it : v) {
		cout << it << endl;
	}
	system("pause");
	return 0;
}