using namespace std;

#include <iostream>

class Shape {
public:
    string color;

    double getArea(double &x, double &y){
        return x*y;
    }
};

class Rectangle : public Shape {
public:
    double height; //In inches
    double width; //In inches

    double getArea(double h, double w) {
        return h * w;
    }

    Rectangle(string x, double y, double z) {
        color = x;
        height = y;
        width = z;
    }
};

class Triangle : public Shape {
public:
    double base; //In inches
    double height; //In inches

    double getArea(double b, double h) {
        double area = 0.5 * b * h;
        return area;
    }

    Triangle(string x, double y, double z) {
        color = x; 
        base = y;
        height = z;
    }
};

class Circle : public Shape {
public:
    double radius; //In inches

    double getArea(double r) {
        double area = 3.14159 * r * r;
        return area;
    }

    Circle(string x, double y) {
        color = x;
        radius = y;
    }
};

int main()
{
    Shape unknown;
    unknown.color = "Red";

    Rectangle rect("Green", 5.2, 4.3);
    Triangle tri("Orange", 2.8, 4.0);
    Circle circ("Blue", 3.8);

    cout << "There are 4 shapes here, and I will describe them." << endl;
    cout << "There is an unknown shape that is the color " << unknown.color << endl;
    cout << "There is a " << rect.color << " rectangle with the following dimensions - \nHeight: " << rect.height << " and Width: " << rect.width << ", and an area of: " << rect.getArea(rect.height, rect.width) << " inches square." << endl;
    cout << "There is a " << tri.color << " triangle with the following dimensiions - \nBase: " << tri.base << " and Height: " << tri.height << " with an area of " << tri.getArea(tri.base, tri.height) << " inches squared." << endl;
    cout << "There is a " << circ.color << " circle with a radius of " << circ.radius << " giving it an area of " << circ.getArea(circ.radius) << " inches squared." << endl;
}


