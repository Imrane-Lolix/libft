#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_memcpy.c"
#include "ft_strlen.c"
#include "ft_memchr.c"

int main() {
	const char dst[5] = "zzzzz";
	//const char *src = "abcd";

	printf("res = %p\n", (char *)ft_memchr((void *)dst, 'z', 5));
	printf("res = %p\n", (char *)memchr(dst, 'z', 5));
	return 0;
}
