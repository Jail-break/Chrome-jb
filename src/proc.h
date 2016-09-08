#pragma once
#include <stdlib.h>

proc *proclist;
proc *remproc(int on);

class proc{
  public:
    proc();
    size_t tr();
    void add();
    ~proc();
  private:
    size_t timesran = 0;
};