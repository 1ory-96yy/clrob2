#include <iostream>

class Point {
    int x = 0;
    int y = 0;

public:
    Point() {
        std::cout << "x: " << x << " Point Default constructor\n";
    }
    Point(int pX, int pY) {
        x = pX;
        y = pY;
        std::cout << "Point Parametrized constructor\n";
    }
    Point(const Point& other) {
        x = other.x;
        y = other.y;
        std::cout << "Point Copy constructor\n";
    }

    ~Point() {
        std::cout << "Point Destructor\n";
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

int main() {
    Point p1(3, 4); 
    Point p2(p1);
    std::cout << "p2.x: " << p2.getX() << ", p2.y: " << p2.getY() << std::endl;
    return 0;
}
