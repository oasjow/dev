#include "flowerpot.hpp"

void FlowerPot::set_base(Trapezoid* input) {
    if (base != nullptr) {
        delete base;
    }
    base = input;
}

void FlowerPot::set_base(double input1, double input2, double input_h) {
    if (base != nullptr) {
        base->set_base1(input1);
        base->set_base2(input2);
        base->set_height(input_h);
    }
    else {
    base = new Trapezoid(input1, input2, input_h);
    }
}

void FlowerPot::set_flower_type(std::string input) {
    flower_type = input;
}

void FlowerPot::set_price(float input) {
    price = input;
}

Trapezoid* FlowerPot::get_base() const {
    return base;
}

std::string FlowerPot::get_flower_type() const {
    return flower_type;
}

float FlowerPot::get_price() const {
    return price;
}

FlowerPot::FlowerPot() {
    base = new Trapezoid;
    flower_type = "None";
    price = 0;
}

FlowerPot::~FlowerPot() {
    if (base != nullptr) {
        delete base;
    }
}