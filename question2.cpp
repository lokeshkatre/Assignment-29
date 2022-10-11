#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, img;
    public:
    Complex(){}
    Complex (int x, int y)
    {
        real=x;
        img=y;
    }
    void setData(int x,int y)
    {
        real = x;
        img = y;
    }
    operator int()
    {
        return real;
    }
    
};
int main()
{
    Complex c1(3,4);
    cout<<c1<<endl;
    c1.setData(4,5);
    int x;
    x=c1;
    cout<<x<<endl;
}