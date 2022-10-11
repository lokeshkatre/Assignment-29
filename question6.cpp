#include <iostream>
using namespace std;
class Time
{
    private :
    int hr, min;
    public:
    Time(){}
    Time(int x)
    {
        hr = x/3600;
        min= (x % 3600)/60;
    }
    void display()
    {
        cout << "Hr = "<< hr << " min = "<< min <<endl;
    }
};
int main()

{
    int duration;
    cout <<"Enter time duration in seconds: ";
    cin >> duration;
    Time t1 = duration;
    t1.display();

    return 0;
}