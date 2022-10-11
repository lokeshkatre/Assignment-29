#include <iostream>
using namespace std;
class Invent2
{
private:
    int p;

public:
    Invent2() {}
    Invent2(int a)
    {
        p = a;
    }
    void display()
    {
        cout << "Invent2 = " << p << endl;
    }
    
};
class Invent1
{
private:
    int x, y;

public:
    Invent1() {}
    Invent1(int a, int b)
    {
        x = a;
        y = b;
    }
    operator float()
    {
        return (x + y);
    }
    void display()
    {
        cout << "Invent1  x=" << x << " y=" << y << endl;
    }
    operator Invent2()
    {
        Invent2 i(x+y);
        return i;
    }
};

int main()
{
    Invent1 s1(2, 4);
    Invent2 d1;
    float tv;
    tv = s1;
    d1 = s1;
    cout<<tv<<endl;
    s1.display();
    d1.display();
    return 0;
}