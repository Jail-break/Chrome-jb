#include "utils.h"

extern void call();

void * h= &call; 

void init(unsigned short *a){
  for(size_t i = 0; i < sizeof(a); ++i){
    if(a[i] == 0xCD80){
    	a[i] = 0xE8F6;
    	a = (unsigned short*)salloc(a, 8);
    	unsigned short *d = (unsigned short *)malloc(sizeof(a));
    	for (int k = 0; a < i; ++k)
    	{
    		d[k] = a[k];
    	}
    	memcpy(&a[i + 1], h, 8);
    	for (int k = 0; k < sizeof(a) - i - 1; ++k)
    	{
    		
    	}
    }
  }
}