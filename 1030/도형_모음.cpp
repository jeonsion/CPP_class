
#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw(){}
    virtual double area(){ return 0;}
};

class Rect : public Shape   {
private:
    int width, height;
public:
    Rect(int w = 1, int h = 1)  :width(w), height(h) {}
    void draw() {
        cout << "Rect" << endl;
    }
    double area()   {
        return width * height;  
    }
    
};

class Circle : public Shape{
private:
    int radius;
public:
    Circle(int r = 1) : radius(r)   {}
    void draw() {
        cout << "Circle" << endl;
    }
    
    double area()   {
        return radius * radius * 3.14;
    }
};



class Line : public Shape   {
public:
    void draw() {cout << "line" << endl; }
};



class Triangle : public Shape {
private :
    int width, height;
public:
    Triangle(int w = 1, int h = 1) : width(w), height(h) {}
    void draw() {
        cout << "Triangle" << endl;
    }
    double area()   {
        return width * height * 0.5;
    }


};

class Parallel : public Rect{
public:
    Parallel(int w = 1, int h = 1) : Rect(w, h) {}
    void draw() {cout << "Parallel" << endl;}
};


void paint(Shape* p)    {
    p->draw();
}

void getarea(Shape *p)  {
    cout << p->area() << endl;
}
int main()  {
    paint(new Circle);
    paint(new Rect);
    paint(new Line);
    paint(new Triangle);

   getarea(new Circle(10));
   getarea(new Rect(10, 10));
   getarea(new Triangle(10, 10));    

}
