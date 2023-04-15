#include <bits/stdc++.h>
using namespace std;
class Circle
{
public:
    Circle(double r)
    {
        radius = r;
    }
    double getArea()
    {
        return PI * radius * radius;
    }
    double getPerimeter()
    {
        return 2 * PI * radius;
    }
    static double PI;
    double getdiameter()
    {
        return 2 * radius;
    }
    void showInfo()
    {
        cout << "直径=" << getdiameter() << endl;
        cout << "周长=" << getPerimeter() << endl;
        cout << "面积=" << getArea() << endl;
    }

private:
    double radius;
};
int main()
{
    Circle::PI = 3.14;
    int r;
    cin >> r;
    Circle c(r);
    c.showInfo();
    system("pause");
    return 0;
}