#include "register.h"
#include <string>
#include <string.h>

extern void pmterm(const char *);

extern char * plterm(int a);

void call(){
	if(eax == 0 && rax != 0){
		switch(rax){
			case 1:
				if(rbx != 0){
					pmterm(strcat("exit$", std::to_string(ebx).c_str()));
				}else{
					pterm("exit$");
				}
				break;
			case 3:
				if(rbx == 1){
					plterm(6)
				}else{
					asm("int $0x80");
				}
				break;

			default:
				asm("int $0x80");
				break;
		}
	}else{

	}
}
