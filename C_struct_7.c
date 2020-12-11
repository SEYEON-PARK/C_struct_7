#include <stdio.h>

typedef struct happy {
	int a;
	char b;
}happy;

int main(void)
{
    happy H;
	H.a = 7;
	H.b = 'H';

	printf("%d %c\n", H.a, H.b);

	return 0;
}