#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

class Rectangle {
    private:
        int width;
        int length;
    public:
        // setters
        void set_width(int w);
        void set_length(int l);
        // getters
        int get_width() const;
        int get_length() const;
        int get_area() const;
        int get_perimeter() const;
};

void Rectangle::set_width(int w) {
    width = w;
}

void Rectangle::set_length(int l) {
    length = l;
}

int Rectangle::get_width() const {
    return width;
}

int Rectangle::get_length() const {
    return length;
}

int Rectangle::get_area() const {
    return width * length;
}

int Rectangle::get_perimeter() const {
    return 2 * (width + length);
}

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