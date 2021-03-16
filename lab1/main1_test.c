#include "main1.h"
#include <stdio.h>  
#include <assert.h>

void test_check_input2()
{
	assert(check_input2(0) == 0);
	assert(check_input2(1) == 0);
	assert(check_input2(12.5) == 1);
	assert(check_input2(12345.643) == 1);
}

#undef main

int main()
{
	test_check_input2();
	printf("Test are done");
	getchar();
	return 0;
}