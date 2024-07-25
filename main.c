#include <stdio.h>
#include "libft.h"
#include "ft_strlen.c"
#include "ft_strlcat.c"

int main() {
    const char	src[5] = "bbbbb";
    char		dst[5] = "aaa";
	
	size_t s = ft_strlcat(dst, src, 5);
	printf("dst res = %s\n", dst);
    printf("size    = %ld\n", s);
	return 0;
}
