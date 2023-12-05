#include <iostream>
struct increment{
    int counter;

    increment(int start)  : counter(start) {}
    int operator()(int x){
        return x + counter ++;
    }
};

int main()  {
    increment inc(1);
    std:: cout << inc(5) << std::endl;
    std:: cout << inc(3) << std::endl;
    return 0;
}