#include <iostream>
#include <memory>
#include <stdexcept>


class Resource{
public:
    Resource()  {std::cout << "Resource acquired\n";}
    ~Resource() {std::cout << "Resource destroyed\n";}
    void doSomething() {
        throw std::runtime_error("Exception caught: Anerror occured\n");
    }
};

void process()  {
    std::unique_ptr<Resource> res(new Resource());
    res->doSomething(); //예외 발생
    //여기서 res는 자동으로 해제됨
}

int main()  {
    try{
        process();
    }
    catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}






