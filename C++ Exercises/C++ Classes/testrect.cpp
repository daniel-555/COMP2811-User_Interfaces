#include <iostream>
#include <stdexcept>
#include "rect.hpp"

using namespace std;

Rectangle a(15, 12, 5, 4);
Rectangle* b = new Rectangle(4, 4);

int main()
{
    cout << "Rectangle A: perimeter=" << a.perimeter() << ", area=" << a.area() << endl;
    cout << "Rectangle B: perimeter=" << b->perimeter() << ", area=" << b->area() << endl;

    try 
    {
        Rectangle c(100, 100, 10, 10);

    } catch (exception e) {
        cerr << e.what() << endl;
    }


    delete b;
    return 0;
}