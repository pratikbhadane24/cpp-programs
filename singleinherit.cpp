#include <iostream>
using namespace std;

class Shape
{
protected:
    int length, breadth;

public:
    void setlen(int l)
    {
        length = l;
    }
    void setbrth(int b)
    {
        breadth = b;
    }
};

class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (length * breadth);
    }
};

int main()
{
    Rectangle R;
    R.setlen(50);
    R.setbrth(30);
    cout << "Area: " << R.getArea();
    return 0;
}