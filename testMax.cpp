#include<iostream>
extern "C" int64_t Max(int64_t, int64_t);
int main(){
    std::cout << Max(4, 9);
    return 0;
}