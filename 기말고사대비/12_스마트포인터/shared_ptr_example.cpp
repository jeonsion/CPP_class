#include <iostream>
#include <memory>

int main()  {
    std::shared_ptr<int> sptr_int = std::make_shared<int>(10); //포인터 생성
    std::cout << "sptr_int count = " << sptr_int.use_count() << std::endl;

    {
        std::shared_ptr<int> sptr_int2 = sptr_int; //소유권 이전
        std::cout <<"sptr_int count = " << sptr_int.use_count() << std::endl;
    }
    std::cout <<"sptr_int count = " << sptr_int.use_count() << std::endl;
}