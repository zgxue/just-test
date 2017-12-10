#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T> class Stack {
private:
    vector<T> elems;
public:
    void push(T& elem);
    void pop();
    T top();
};

template <class T> void Stack<T>::push(T& elem){
    elems.push_back(elem);
}

template <class T> void Stack<T>::pop(){
    if (!elems.empty()) { 
        elems.pop_back(); 
    }
}

template <class T> T Stack<T>::top (){ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::top(): empty stack"); 
    }
    return elems.back();  
} 
    

int main(){
    Stack<float> ff;
    float c = 3.1;
    ff.push(c);
    cout << ff.top() << endl;
    return 0;
}