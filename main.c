#include <stdio.h>
#include <string.h>
#include "ft_memccpy.c"

int main() {
	char dst[5] = "zzzzz";
	const char *src = "abcd";

	printf("res = %s\n", (char *)ft_memccpy(dst, src, 'c', 5));
	return 0;
}
