#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    Complex(){}
    Complex(int x)
    {
        real=x;
        img=x;
    }
    void operator=(int a)
    {
        real=a;
        img=a;
    }
    void display ()
    {
        cout<<" real = "<<real<<" img = "<<img<<endl;
    }
};
int main()
{
    Complex c1=5;
    int x=6;
    c1=x;
    c1.display();
    return 0;
}