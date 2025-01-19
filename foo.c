#include <stdio.h>
static void foo(int a)
{
	printf("Merge conflict\n");
}
static void bar(int b)
{
	b = 10;
}