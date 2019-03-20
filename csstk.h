// Custom data structure header in C++

// No copyright on this source code
// Writer: SIVESE, Date: 2019.03.17
// Version: 0.1.1

// Git-hub: <https://github.com/sivese>


/**
 * @Module Custom Stack Header (= csstk.h)
 * @Compiler GCC
 * @Build C++14
 *
 * This is custom stack class that imitate STL stack.
 * Most parts of CTL(Custom Library) are very poor in
 * comparison with STL. But this code will be upgraded
 * gradually.
 *
 */

#ifndef CSSTK_H_INCLUDED
#define CSSTK_H_INCLUDED

#include <memory>

namespace cst{

using std::unique_ptr;

const int INIT_LENG = 4;

template<typename T>
class Stack{
public:
    Stack(int maximum = 250 );
    virtual ~Stack();

    void push(T val);
    T pop();
    T peek(){ return box[top]; }
    auto getLeng(){ return leng; }
private:
    int maximum;
    int leng, top;
    int boxSize;
    T* box;

    void boxResize();
};

}

#endif // CSSTK_H_INCLUDED
