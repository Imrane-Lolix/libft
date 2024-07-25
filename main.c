#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"
#include "ft_strlen.c"
#include "ft_memmove.c"

int main() {
	char dst[5] = "zzzzz";
	const char *src = "abcd";

	printf("res = %s\n", (char *)memmove(dst, src, 5));
	return 0;
}
