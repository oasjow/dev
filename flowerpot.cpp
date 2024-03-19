#include "flowerpot.hpp"

void FlowerPot::set_base(Trapezoid* input) {
    if (base != nullptr) {
        delete base;
    }
    base = input;
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

