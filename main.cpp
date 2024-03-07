#include "rectangle.hpp"
#include <iostream>

int main() {
    Rectangle* rect = new Rectangle;
    rect->set_width(5);
    rect->set_length(10);
    std::cout << "Width: " << rect->get_width() << std::endl;
    std::cout << "Length: " << rect->get_length() << std::endl;
    std::cout << "Area: " << rect->get_area() << std::endl;
    std::cout << "Perimeter: " << rect->get_perimeter() << std::endl;
    delete rect;

    return 0;
}