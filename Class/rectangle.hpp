#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int length;
    public:
        // constructors
        Rectangle()
        { width = 1, length = 1; }

        Rectangle(int input1, int input2)
        { width = input1; length = input2;}
        // setters
        void set_width(int w)
        { width = w; }
        void set_length(int l)
        { length = l; }
        // getters
        int get_width() const
        { return width; }
        int get_length() const
        { return length; }
        int get_area() const
        { return width * length; }
        int get_perimeter() const
        { return 2 * (width + length); }
};

#endif