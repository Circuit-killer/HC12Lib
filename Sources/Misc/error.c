#include "error.h"
#include "common.h"
#include <stdio.h>

void err_Throw(char* errMsg)
{
//	printf("%s\n", errMsg);
	puts(errMsg);
	putchar('\n');
	asm sei;
	
	while (1)
		;
		
	return; //no jjjoda.
}