#include <stdio.h>
#include <stdint.h>

#define SUCCESS 0
typedef uint8_t u8;

/*
 * This programm will receive one string as input and will check if it has all unique characters
 * Will give you a visual address and will exit with 0 if the checking was done properly and 1 if an error ocurred
 *
 */

u8 main(int argc, char *argv[])
{
	int counter;
	for(counter=0; counter<argc; counter++)
		printf("argv[%2d]: %s\n",counter,argv[counter]);
	return SUCCESS;
}
