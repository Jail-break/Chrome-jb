#include "register.h"

extern void pmterm(const char *);

extern char * plterm();

void call(){
	if(eax == 0 && rax != 0){
		switch(rax){
			case 1:
				if(ebx != 0){
					
				}
				break;

			default:
				asm("int $0x80");
				break;
		}
	}else{

	}
}