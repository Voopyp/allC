#include <iostream>

using namespace std;
//Bace class


class Shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;

};
//Derived class


//Bace class Paint Cost
class PointCost
{
public:
    int GetCost(int area)
    {
        return area * 50;
    }
};
//Derived class
class Rectangle : public Shape, public PointCost
{
public:
    int GetArea()
    {
        return(width * height);
    }
};



int main()
{
    Rectangle Rect;
    int area;
    Rect.setWidth(5);
    Rect.setHeight(5);

    area = Rect.GetArea();
    //Print the area of the oject.
    cout << "Total area: " << Rect.GetArea() << endl;
    cout << "Total PointCost: $" << Rect.GetCost(area) << endl;
    return 0;
}

