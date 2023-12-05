#include <iostream>
#include <memory>


class Test{
public:
    Test() {std::cout << "Test created "    << std::endl;}
    ~Test() { std::cout << "Test destroyed "   << std::endl;}
    void greet()    { std:: cout << "Hello" << std::endl;}
};




int main()  {
    std::weak_ptr<Test> weakPtr;

    //RAII 패턴에 의해서 블럭 안에서 할당, 블럭을 벋어나면 객체 생명주기 등등 사라짐

    {
        std::shared_ptr<Test> sharedPtr = std::make_shared<Test>();
        weakPtr = sharedPtr;

        //검사하기
        if(auto tempPtr = weakPtr.lock())   //weak_ptr를 shared_ptr로 안전하게 변환
            tempPtr->greet();
    }


    //메모리 공간 살아 있는지 물어보기 expired
    //블럭안에서 벗어났으니 해제됬을 거임
    if (weakPtr.expired())  {   //true로 들어올꺼임 사라졌으니까
        std::cout << "The object has been destroyed" << std::endl;
    }
    else{
        if(auto tempPtr = weakPtr.lock())   //weak_ptr를 shared_ptr로 안전하게 변환
            tempPtr->greet();
    }
}