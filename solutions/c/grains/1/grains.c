#include "grains.h"
//uint64_t multiply=1;
//uint64_t sum=0;
uint64_t square(uint8_t index)
{
	uint64_t multiply=1;
	if(index==0) return 0;
	else if(index==1) return 1;
	for(int i=1;i<index;i++)
	{
		multiply=multiply*2;
	}
	return multiply;
}
uint64_t total(void)
{
	uint64_t sum=0;
	uint64_t multiply=1;
	for(int i=0;i<64;i++)
	{
		sum=sum+multiply;
		multiply=multiply*2;
	}
	return sum;
}

