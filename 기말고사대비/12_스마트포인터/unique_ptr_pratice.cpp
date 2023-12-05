#include <memory>
#include <iostream>


class Resource{
public:
    Resource()  {std::cout << "Resource acquired\n";}
    ~Resource() {std::cout << "Resource destroyed\n";}
    void doSomething() {std::cout << "Doing something\n";}
};

void process(std::unique_ptr<Resource> &res){
    if(res!=nullptr){
        res->doSomething();
    }
    else{
        std::cout << "Pointer is null, No action taken" << std::endl;
    }
}

int main()  {
    std::unique_ptr<Resource> res = std::make_unique<Resource>(); 
    process(res);

    std::unique_ptr<Resource> res2 = std::move(res);
    process(res);

    return 0;

}