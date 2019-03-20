#ifndef SCTLAB_H_INCLUDED
#define SCTLAB_H_INCLUDED

#include <iostream>

/*
    *********** Environment **********
    Model: Lenovo Y700
    CPU:I7-6700HQ
    RAM:8GB
    VGA:GeForce960GTX
    OS:Windows10

    Roughly, 500,000,000 instructions can be executed in 1 second.
*/

namespace lab{

class LibraryLab{
public:
    LibraryLab(void (*workParam)() = nullptr);
    virtual ~LibraryLab();

    void runTestment();
private:
    void (*workParam)();

    static const std::string REPORT_MSG;
};

}

#endif // SCTLAB_H_INCLUDED
