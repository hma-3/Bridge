#include <iostream>

using namespace std;

class Figure {
public:
    virtual ~Figure() = default;

    virtual void draw() const = 0;

    virtual void setColor(const string& color) = 0;

    virtual string getColor() const = 0;
};

class Circle : public Figure {
public:
    Circle(float radius, const string& color) : radius_(radius), color_(color) {}

    void draw() const override {
        cout << "Drawing a circle with radius " << radius_ << " and color " << color_ << endl;
    }

    void setColor(const string& color) override { color_ = color; }

    string getColor() const override { return color_; }

private:
    float radius_;
    string color_;
};

class Square : public Figure {
public:
    Square(float side_length, const string& color) : side_length_(side_length), color_(color) {}

    void draw() const override {
        cout << "Drawing a square with side length " << side_length_ << " and color " << color_ << endl;
    }

    void setColor(const string& color) override { color_ = color; }

    string getColor() const override { return color_; }

private:
    float side_length_;
    string color_;
};

int main() {
    Circle circle(10.0f, "red");
    Square square(5.0f, "blue");

    circle.draw();
    square.draw();

    circle.setColor("green");
    square.setColor("yellow");

    circle.draw();
    square.draw();

    return 0;
}
