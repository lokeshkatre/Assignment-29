#include<iostream>
using namespace std;
class Dollar 
{
    float d;
    public:
    Dollar(){}
    Dollar(float x)
    {
        d = x;
    }
    float getD(){return d;}
     void display()
    {
        cout << "Dollar = " << d << endl;
    }
};
class Rupee 
{
    float r;
    public:
    Rupee(){}
    Rupee(float x)
    {
        r = x;
    }
    Rupee(Dollar d)
    {
        r=d.getD()*80;
    }
    operator Dollar()
    {
        return r/80;
    }
    void display()
    {
        cout << "Rupee = " << r << endl;
    }
};
int main()

{
Rupee r = 100;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}