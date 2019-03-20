#include "cstlab.h"
#include "pfmc.h"
#include <time.h>

using namespace lab;

const std::string LibraryLab::REPORT_MSG = "Performance measure report\nIt takes ";

LibraryLab::LibraryLab(void (*workParam)()) : workParam(workParam) { }

LibraryLab::~LibraryLab(){

}

void LibraryLab::runTestment(){
    auto elap = timer(workParam);
    std::cout<<REPORT_MSG<<elap<<"ms.."<<std::endl;
}
