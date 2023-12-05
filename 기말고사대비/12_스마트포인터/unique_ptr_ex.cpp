#include <iostream>
#include <memory>

void process(std::unique_ptr<int> &ptr){
    if(ptr!=nullptr){
        std::cout << "Processing " << *ptr << std::endl;
    }
    else{
        std::cout << "Pointer is null, No action taken" << std::endl;
    }

}

int main()  {
    std::unique_ptr<int> uptr_int = std::make_unique<int>(10); //포인터 생성    
    process(uptr_int);

    std::unique_ptr<int> uptr_int2 = std::move(uptr_int);   //소유권 이전

    process(uptr_int);

    return 0;



}