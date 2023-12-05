#include <iostream>
#include <memory>


void process(std::unique_ptr<int> &ptr) {
    if(ptr!= nullptr){
        std::cout << "Processing value " << *ptr << std::endl;
    }
    else{
        std::cout << "Pointer is null. No action taken" << std::endl;
    }
}

int main()  {
    std::unique_ptr<int>uptr_int(new int(10));
    process(uptr_int);

    //소유권 이전
    std::unique_ptr<int> uptr_int2 = std::move(uptr_int);
    process(uptr_int);

    return 0;
    
}