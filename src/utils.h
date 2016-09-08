#pragma once
#include <stdlib.h>

void* salloc(void * a, int b){
	void *contents = malloc(sizeof(a));
	memcpy(a, contents, sizeof(contents));

	return realloc(a, b);

}