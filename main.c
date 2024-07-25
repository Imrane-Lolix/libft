#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_memcpy.c"
#include "ft_strlen.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"

int main() {
	const char dst[5] = "abcde";
	const char src[5] = "abcde";

	printf("res = %d\n", ft_memcmp(dst, src, 5));
	printf("res = %d\n", memcmp(dst, src, 5));
	return 0;
}
