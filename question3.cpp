#include <iostream>
using namespace std;
class Product
{
private:
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    void display()
    {
        cout << "Product x =" << x << " y =" << y << endl;
    }
};
class Item
{
private:
    int i;

public:
    Item() {}
    Item(Product P)
    {
        i = P.getx() + P.gety();
    }
    void display()
    {
        cout << "Item i = " << i << endl;
    }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    i1 = p1;
    p1.display();
    i1.display();
    return 0;
}