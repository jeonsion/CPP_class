#include <iostream>
#include <memory>





class Resource{
public:
    Resource()  {std::cout << "Resource acquire\n";}
    ~Resource() {std::cout << "Resource destroy\n";}
    void doSomething() {std::cout << "Doing Something\n";}
    

};

struct Free{

    void operator()(Resource *ptr){
        std::cout << "Custom delete" << std::endl;
        free(ptr);
    }

};


int main()  {
    std::cout <<"20191545 전시온 " << std::endl;
    std::unique_ptr<Resource, Free> p(static_cast<Resource*>(malloc(sizeof(Resource))), Free());
    p->doSomething();
    
    return 0;
}



