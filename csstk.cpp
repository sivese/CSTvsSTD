#include "csstk.h"

using namespace cst;

template <typename T>
Stack<T>::Stack(int maximum) : maximum(maximum) {
    box = new T[INIT_LENG];
    boxSize = INIT_LENG;

    top = -1;
    leng = 0;
}

template <typename T>
Stack<T>::~Stack(){
    delete[] box;
}

template <typename T>
void Stack<T>::push(T val){
    if(boxSize==leng && boxSize<maximum)
        boxResize();

    box[leng] = val;

    top++;
    leng++;
}

template <typename T>
T Stack<T>::pop(){
    auto val = box[top];
    box[top] = NULL;

    top--;
    leng--;

    return val;
}

template <typename T>
void Stack<T>::boxResize(){
    auto tmpBox = box;

    boxSize *= 2;

    if(boxSize>maximum)
        boxSize = maximum;

    box = new T[boxSize];

    //Array copy function ( src *begin to end*, dst )
    std::copy(std::begin(tmpBox), std::end(tmpBox), std::begin(box));

    delete[] tmpBox;
}
