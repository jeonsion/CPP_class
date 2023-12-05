#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() {radius = 1; }
    Circle(int r)
    { radius = r; }
    void setRadius(int r) {radius = r;}
    double getArea();
};

double Circle::getArea()    {
    return 3.14 * radius * radius;
}
int main()  {
    
    Circle circleArray[2][3];
    circleArray[0][1].setRadius(10);
    circleArray[0][2].setRadius(20);
    circleArray[0][3].setRadius(30);
    circleArray[1][1].setRadius(40);
    circleArray[1][2].setRadius(50);
    circleArray[1][3].setRadius(60);
    
    for(int i = 0 ; i< 2; i++){
        for(int j = 0; j<3; j++)    {
            cout << "Circle [" << i <<  ", " << j << "]의 면적은 ";
            cout << circleArray[i][j].getArea() << endl;
        }
    }

    

    

    
    
    



}