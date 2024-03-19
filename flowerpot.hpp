#ifndef FLOWERPOT_HPP
#define FLOWERPOT_HPP
#include "trapezoid.hpp"
#include<string>

class FlowerPot {
    private:
    Trapezoid* base;
    std::string flower_type;
    float price;

    public:
    void set_base(Trapezoid* base);
    void set_flower_type(std::string flower_type);
    void set_price(float price);
    Trapezoid* get_base() const;
    std::string get_flower_type() const;
    float get_price() const;
    FlowerPot();
    ~FlowerPot();
};

#endif