#ifndef Rectangle_h
#define Rectangle_h

class Rectangle{
    // Add private variables here
    private:
    double width, height;

    public:
    /* Add function prototypes here
       You can also add in-line definitions */

    // Constructors
    Rectangle(){
        width = 0.0; height = 0.0;
    }
    Rectangle(double w, double h) {
        width = w; height = h;
    }
    // Destructor
    //~Rectangle();

    // Mutators
    void setWidth(double w){
        width = w;
    };
    void setHeight(double h){
        height = h;
    };

    // Accessors
    double getWidth() const {
        return width;
    }
    double getHeight() const{
        return height;
    }
    double getArea() const{
        return width * height;
    }
    double getPerimeter() const{
        return 2*(width * height);
    }
};

#endif