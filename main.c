#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
	printf("This literal is displaed on standard output")
}

void hello2(void)
{
        printf( "Another message\n");
}

int main(void)
{
	hello1();

	return EXIT_SUCCESS;
}
