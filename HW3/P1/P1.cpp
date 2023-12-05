#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Shape{
    Shape* next;
    int num;
protected:
    virtual void draw() {
        cout << "--Shape--" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
public:
    Shape() {next = NULL;}
    virtual ~Shape() {}
    void paint(){
        draw();
    }
    Shape* add(Shape* p, int i)    {
        this->next = p;
        p->setNum(i);
        return p;
    }
    Shape* getNext()    { return next;}
};

class Circle : public Shape   {
    int num;
protected:
    virtual void draw(){
        cout << this->num << "번째 도형 : Circle" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
};

class Rect : public Shape   {
    int num;
protected:
    virtual void draw(){
        cout << this->num << "번째 도형 : Rect" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
};


class Line : public Shape   {
    int num;
protected:
    virtual void draw(){
        cout << this->num << "번째 도형 : Line" << endl;
    }
    virtual void setNum(int i) {
        this->num = i;
    }
};

int main()  {
    cout << "20191545 전시온 " << endl;
    srand(time(NULL));

    //5개 에서 10개 사이로 랜덤하게 도형을 생성하여 연결


    Shape *pStart=NULL;
    Shape *pLast;


    
    int num = rand()%6+5;   //5~10개 사이의 도형을 생성
    cout << num << "개 도형 생성 " << endl;

    int shape = rand()%3;  //첫번째 도형 생성
        if(shape==0)    {
            pStart = new Circle();
        }
        else if(shape==1)    {
            pStart = new Rect();
        }
        else if(shape==2)    {
            pStart = new Line();
        }
    pLast = pStart;


    for(int i=1; i<num; i++)    {
        int shape = rand()%3;   //0~2 사이의 도형을 생성
        if(shape==0)    {
            pLast = pLast->add(new Circle(), i);
        }
        else if(shape==1)    {
            pLast = pLast->add(new Rect(), i);
        }
        else if(shape==2)    {
            pLast = pLast->add(new Line(), i);
        }
    }


    //현재 연결된 모든 도형을 화면에 그리기
    Shape*p = pStart;   //
    while(p!=NULL)  {
        p->paint(); //도형을 그린다.
        p = p->getNext();
    }   

    p = pStart;
    while(p!=NULL)  {
        Shape* q = p->getNext();
        delete p;
        p = q;
        
    }
}