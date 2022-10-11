#include <iostream>
using namespace std;
class Minute
{
private:
    int min;

public:
    Minute() {}
    Minute(int x)
    {
        min=x;
    }
    
    void display()
    {
        cout << "min = " << min << endl;
    }
};
class Time
{
private:
    int hr, min;

public:
    Time() {}
    Time(int x, int y)
    {
        hr = x;
        min = y;
    }
    void display()
    {
        cout << "Hr = " << hr << " min = " << min << endl;
    }
    operator Minute()
    {
        return hr*60+min;
    }
};

int main()
{
    Time t1(2, 30);
    t1.display();
    Minute m1(4);
    m1.display();
    m1 = t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}