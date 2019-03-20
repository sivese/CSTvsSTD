#include <iostream>
#include "cstlab.h"

#define LIMIT 1000000000

using namespace std;

int main(){
    lab::LibraryLab lib_lab([]()->void{
        for(int i=0;i<LIMIT;i++)
            int a = i;
    });

    lib_lab.runTestment();

    return 0;
}
