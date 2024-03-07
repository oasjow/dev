#include"trapezoid.hpp"
#include<iostream>

Trapezoid::Trapezoid() {
    base1 = 1.0;
    base2 = 1.0;
    height = 1.0;
}

Trapezoid::Trapezoid(double input1, double input2, double input_h){
    base1 = input1;
    base2 = input2;
    height = input_h;
}

void Trapezoid::set_base1(double input){
    if (input < 0){
        std::cout<<"invalid value"<< std::endl;
        return;
    }
    base1 = input;
}

void Trapezoid::set_base2(double input){
    if (input < 0){
        std::cout<<"invalid value"<< std::endl;
        return;
    }
    base2 = input;
}

void Trapezoid::set_height(double input){
    if (input < 0){
        std::cout<<"invalid value"<< std::endl;
        return;
    }
    height = input;
}

double Trapezoid::find_area() const {
    return 0.5 * (base1 + base2) * height;
}