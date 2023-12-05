#include <iostream>
#include <memory>

class Resource {
public:
    Resource()  {std::cout << "Resourfe acquire\n";}
    ~Resource() {std::cout << "Resource destroy\n";}
    void doSomething() {std::cout << "Doing Something\n";}
};

void process(std::unique_ptr<Resource> &ptr){
    if(ptr!=nullptr){
        ptr->doSomething();
    }
    else{
        std::cout << "Pointer is null. No action taken" << std::endl;
    }
}

int main()  {
    std::cout << "20191545 전시온 " << std::endl;

    std::unique_ptr<Resource>uptr_resource(new Resource());
    process(uptr_resource);

    //소유권 이전
    std::unique_ptr<Resource> uptr_resource2 = std::move(uptr_resource);
    process(uptr_resource);

    return 0;

}