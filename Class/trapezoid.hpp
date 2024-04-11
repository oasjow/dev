#ifndef TRAPEZOID_HPP
#define TRAPEZOID_HPP

class Trapezoid {
    private:
        double base1;
        double base2;
        double height;
    public:
        Trapezoid();
        Trapezoid(double, double, double);
        //getters
        double get_base1() const
        { return base1; }
        double get_base2() const
        { return base2; }
        double get_height() const
        { return height; }
        //setters
        void set_base1(double);
        void set_base2(double);
        void set_height(double);
        double find_area() const;

};

#endif