#include <iostream>

struct Rectangle {
    double width;
    double height;

    double calculateArea() {
        return width * height;
    }

    double calculatePerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect1;
    std::cout << "Enter width of Rectangle 1: ";
    std::cin >> rect1.width;
    std::cout << "Enter height of Rectangle 1: ";
    std::cin >> rect1.height;

    Rectangle rect2;
    std::cout << "Enter width of Rectangle 2: ";
    std::cin >> rect2.width;
    std::cout << "Enter height of Rectangle 2: ";
    std::cin >> rect2.height;

    std::cout << "Area of Rectangle 1: " << rect1.calculateArea() << "\n";
    std::cout << "Perimeter of Rectangle 1: " << rect1.calculatePerimeter() << "\n";

    std::cout << "Area of Rectangle 2: " << rect2.calculateArea() << "\n";
    std::cout << "Perimeter of Rectangle 2: " << rect2.calculatePerimeter() << "\n";

    return 0;
}
