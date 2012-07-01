#include "drm_util.h"
#include <iostream>

void enqueue_bits(char* &ptr, unsigned int len, char arr[])
{
	for(unsigned int i = 0; i<len; i++)
	{
		if(arr[i] > 1)
		{
			std::cout << "Error! Received non-binary value: " << arr[i] << std::endl;
		}
		else
		{
			*ptr++ = arr[i];
		}
	}
}
