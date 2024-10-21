#include <vector>
#include "circle2.hpp"
#include "rect.hpp"

using namespace std;

int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Circle(2.5));
    shapes.push_back(new Rectangle(0.0, 1.0, 11.5, 5.2));
    shapes.push_back(new Circle(-1.6, 7.2, 3.5));
    shapes.push_back(new Rectangle(5.6, 2.4));

    for (Shape* s: shapes) {
        s->draw();
    }

    return 0;
}