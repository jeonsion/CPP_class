#include <iostream>
using namespace std;

class CoffeeMahine{
    int coffee = 0;
    int water = 0;
    int sugar = 0;
public:
    CoffeeMahine(int c, int w, int s)  {
        this->coffee = c;
        this->water = w;
        this->sugar = s;
    }
    void drinkEspresso(){   //커피 1, 물 1 소비
        this->coffee--;
        this->water--;
    }

    void show() {
        cout << "커피 머신 상태, 커피 : " << this->coffee << " 물 : " << this->water << " 설탕 : " << this->sugar << endl; 
    }
    void drinkAmericano(){  //커피 1, 물 2 소비
        this->coffee--;
        this->water -= 2;
    }
    void fill(){
        this->coffee = 10;
        this->water = 10;
        this->sugar = 10;
    }
    void drinkSugarCoffee(){    //커피 1, 물 2, 설탕 1 소비
        this->coffee--;
        this->water -= 2;
        this->sugar--;
    }


};


int main()  {
    CoffeeMahine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
}