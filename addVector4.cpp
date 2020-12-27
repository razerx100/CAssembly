#include<iostream>
extern "C" float* AddVec4(float* var1, float* var2);
struct Vec4 {
    float x;
    float y;
    float z;
    float w;
    Vec4(){}
    Vec4(float a, float b, float c, float d)
        : x(a), y(b), z(c), w(d) {}
    Vec4(float* packed)
        : x(*packed), y(*(packed + 1)), z(*(packed + 2)), w(*(packed + 3)) {}
    Vec4& operator=(float* packed){
        this->x = *packed;
        this->y = *(packed + 1);
        this->z = *(packed + 2);
        this->w = *(packed + 3);
        return *this;
    }
    float* operator+(Vec4 other){
        return AddVec4(reinterpret_cast<float*>(this), reinterpret_cast<float*>(&other));
    }
};
int main(){
    Vec4 var1 = {1.2f, 3.5f, 0.6f, 19.1f};
    Vec4 var2 = {0.8f, 1.5f, 2.4f, 0.9f};
    Vec4 result = var1 + var2;
    std::cout << "X = " << result.x << " Y = " << result.y << "\n Z = " << result.z
    << " W = " << result.w;
    return 0;
}