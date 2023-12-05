#include <iostream>
#include <memory>

struct Free{
    void operator()(int *ptr){
        std::cout << "Using custom deleter\n";
        delete[] ptr;
    }
};


int main()  {

    std::unique_ptr<int, Free> p(static_cast<int*>(malloc(sizeof(int))), Free());
    *p = 42;
    std::cout << *p << std::endl;

    return 0;


}

