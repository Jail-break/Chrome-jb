#include "proc.h"
#include "utils.h"

proc lastran;


int sched(){
  unsigned int low = 99999999;
  uint32_t lowon = 0;
  for(size_t i; i < sizeof(prolist); ++i){
    if(prolist[i] == lastran){
      
    }else if(prolist[i].tr() < low){
      lowon = i;
    }
  }

  return lowon;
}