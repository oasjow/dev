#include<iostream>
#include"rectangle.hpp"
#include"trapezoid.hpp"
#include"flowerpot.hpp"

int main() {
    Rectangle* rect = new Rectangle;
    rect->set_width(5);
    rect->set_length(10);
    std::cout << "Width: " << rect->get_width() << std::endl;
    std::cout << "Length: " << rect->get_length() << std::endl;
    std::cout << "Area: " << rect->get_area() << std::endl;
    std::cout << "Perimeter: " << rect->get_perimeter() << std::endl;
    delete rect;

    Trapezoid* trap = new Trapezoid(5, 10, 5);
    std::cout << "Base 1: " << trap->get_base1() << std::endl;
    std::cout << "Base 2: " << trap->get_base2() << std::endl;
    std::cout << "Height: " << trap->get_height() << std::endl;
    std::cout << "Area: " << trap->find_area() << std::endl;
    delete trap;

    FlowerPot* pot = new FlowerPot;
    pot->set_base(new Trapezoid(5, 10, 5));
    pot->set_flower_type("Rose");
    pot->set_price(10);
    std::cout << "Base 1: " << pot->get_base()->get_base1() << std::endl;
    std::cout << "Base 2: " << pot->get_base()->get_base2() << std::endl;
    std::cout << "Height: " << pot->get_base()->get_height() << std::endl;
    std::cout << "Flower Type: " << pot->get_flower_type() << std::endl;
    std::cout << "Price: " << pot->get_price() << std::endl;
    delete pot;

    return 0;
}