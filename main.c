#include <stdio.h>

int x = 10;
int y = 20;

int test_add(int a, int b)
{
	return (a+b);
}

int main(int argc, char *argv[])
{
	int z = 0;
	z = test_add(x, y);
	printf("z=%d\n", z);
	printf("Hello!\n");
	return 0;
}
