#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Vehicle{
    Vehicle* next;
    int num;
protected:
    virtual void draw() {
        cout << "--Vehicle--" << endl;
    }

public:
    Vehicle() {next = NULL;}
    virtual ~Vehicle() {}
    void paint(){
        draw();
    }
    Vehicle* add(Vehicle* p, int i)    {
        this->next = p;
        p->setNum(i);
        return p;
    }
    Vehicle* getNext()    { return next;}
    virtual void setNum(int i) {
        this->num = i;
    }
};

class Car : public Vehicle   {
    int num;
protected:
    virtual void draw(){
        cout <<  "Car" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
public:
    ~Car() {cout <<this->num << " Car 소멸" << endl;}
};

class Bike : public Vehicle   {
    int num;
protected:
    virtual void draw(){
        cout <<  "Bike" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
public:
    ~Bike() {cout <<this->num << " Bike 소멸" << endl;}
};

int main()  {
    srand(time(NULL));
    
    Vehicle *pStart = NULL;
    Vehicle *pLast;

    int num = rand()%6+5; // 5~10개 사이의 도형을 생성
    cout << num << "개 생성" << endl;

    //첫번째 vehicle 생성
    int vehicle = rand()%2;
    if(vehicle == 0) {
        pStart = new Car;
    }
    else {
        pStart = new Bike;
    }
    pLast = pStart;
    int index = rand()%9000+1000;
    pStart->setNum(index);


    for(int i = 1; i<num; i++) {
        int vehicle = rand()%2;

        //랜덤하게 4자리 수 생성
        int index = rand()%9000+1000;

        if(vehicle == 0) {
            pLast = pLast->add(new Car, index);
        }
        else {
            pLast = pLast->add(new Bike, index);
        }
    }

    Vehicle *p = pStart;
    while(p!=NULL){
        p->paint();
        p = p->getNext();
    }

    p = pStart;
    while(p!=NULL){
        Vehicle *q = p->getNext();
        delete p;
        p = q;
    }
}