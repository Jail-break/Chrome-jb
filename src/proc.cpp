#include "utils.h"
#include "proc.h"
#include <string.h>

proc::proc(){
  
}

size_t proc::tr(){
  return timesran;
}


void proc::add(){
  timesran++;
}

proc::~proc(){
  
}

proc* remproc(int on){
  proc* a = nullptr;
  proc* b = nullptr;
  for(size_t i = 0; i < sizeof(proclist) - on; ++i){
    a = (proc *)salloc(a, 1);
    a[i] = proclist[i];
  }
  for(size_t i = on + 1; i <)
  return (proc *)strcat((char *) a, (const char*)b);
}