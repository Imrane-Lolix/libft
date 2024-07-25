#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
#include "ft_memset.c"
#include "ft_bzero.c"

int main() {
    char n[10] = "aaaaaaaaaa";
	ft_bzero(n, 10);
	printf("ptr    = %s\n", n);
    //printf("ptr    = %s\n", (char *)memset((void *)n, 65, 10));
	return 0;
}
