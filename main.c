#include <stdio.h>
#include "libft.h"
#include "ft_strlen.c"
#include "ft_strncat.c"

int main() {
    const char	src[20] = "My name is Imrane\0";
    char		dst[40] = "Hello, ";
	ft_strncat(dst, src, 5);
	printf("res = %s\n", dst);
    return 0;
}
