#include <iostream>

class Point {
    int x;
    int y;

public:
    Point() : x(0), y(0) {
        std::cout << "x: " << x << " Point Default constructor\n";
    }
    Point(int pX, int pY) : x(pX), y(pY) {
        std::cout << "Point Parametrized constructor\n";
    }
    Point(const Point& other) : x(other.x), y(other.y) {
        std::cout << "Point Copy constructor\n";
    }
};

int main() {
    Point p1(3, 4); 
    Point p2(p1);   
    return 0;
}
