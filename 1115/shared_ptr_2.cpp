#include <iostream>
#include <memory>
#include <ctime>
#include <cstdlib>

class Resource { 
    int rand_num;
public:
    Resource()  {
        rand_num = rand();
        std::cout << "Resource acquire\n";
    }
    ~Resource(){std::cout << "Resource destroy\n";}
    void show() {std::cout << rand_num << std::endl;}

};

void process(std::shared_ptr <Resource> ptr){
    if (ptr!=nullptr){
        ptr ->show();
    }
    else{
        std::cout << "Pointer is null. No action taken" << std::endl;
    }

}


int main()  {
    srand((unsigned)time(0));
    std::shared_ptr<Resource> res1 = std::make_shared<Resource>();
    process(res1);
    std::cout << "count: " << res1.use_count() << '\n';
    std::shared_ptr<Resource> res2(new Resource());
    process(res2);
    std::cout << "cout: " << res2.use_count() << '\n';
    res2 = res1;
    process(res2);
    std::cout << "cout: " << res2.use_count() << '\n';
    {
        std::shared_ptr<Resource> res2 = res1;
        process(res2);
        std::cout << "cout: " << res2.use_count() << '\n';
    }
    process(res2);
    std::cout << "res2 cout: " << res2.use_count() << '\n';
    

    return 0;
}