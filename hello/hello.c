#include <stdio.h>
#include <assert.h>
#include "string.h"

int main ()
{
	char *s = "OVO JE TEST";
	int len = strlen(s);
	printf("%i\n", len);
	printf("%s\n", s);
	assert(len==10);
	printf("Pull - ne znam sta se desilo");
	return 0;
}
