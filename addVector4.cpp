#include<iostream>
extern "C" void AddVec4(float* var1, float* var2, float* result);
struct Vec4 {
    float x;
    float y;
    float z;
    float w;
};
int main(){
    Vec4 var1 = {1.2f, 3.5f, 0.6f, 19.1f};
    Vec4 var2 = {0.8f, 1.5f, 2.4f, 0.9f};
    Vec4 result = {};
    AddVec4((float*)&var1, (float*)&var2, (float*)&result);
    std::cout << "X = " << result.x << " Y = " << result.y << "\n Z = " << result.z
    << " W = " << result.w;
    return 0;
}