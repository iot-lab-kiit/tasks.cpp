#include <iostream>

using namespace std;

// class Shape with public data member finalarea to display Area of the shapes
class Shape {
    public:
    float finalarea;
};

// class Circle inheriting Shape 
class Circle : public Shape{
    public:
    int radius = 5;
    
    float area()
    {
        return 2*3.14*radius;
    }
};

// class Rectangle inheriting Shape 
class Rectangle : public Shape{
    public:
    int length = 5;
    int breadth = 3;
    
    float area()
    {
        return length*breadth;
    }
};


// class Triangle inheriting Shape 
class Triangle : public Shape{
    public:
    int height = 5;
    int base = 2;
    
    float area()
    {
        return .5*base*height;
    }
};


int main()
{
    // Circle object
    Circle circle;
    //finalarea is member of Shape class but accessible by it's child class
    circle.finalarea = circle.area();
    cout<<"Area of Circle: "<<circle.finalarea<<endl;
    
    //Triangle object
    Triangle triangle;
    triangle.finalarea = triangle.area();
    cout<<"Area of Triangle: "<<triangle.finalarea<<endl;
    
    //Rectangle object
    Rectangle rectangle;
    rectangle.finalarea = rectangle.area();
    cout<< "Area of Rectangle: "<<rectangle.finalarea;
    
    return 0;
}
