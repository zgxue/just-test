#include <iostream>

template <typename T> T min_t(T& a, T& b){
    return a < b ? a : b;
}

using namespace std;

int main(){
    int i1 = 1;
    int j1 = 2;
    cout << min_t(i1,j1) << endl;

    float i2 = 1.1;
    float j2 = 2.1;
    cout << min_t(i2,j2) << endl;
    return 0;
}