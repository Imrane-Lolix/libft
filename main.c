#include <stdio.h>
#include "libft.h"
#include "ft_strncmp.c"

int main() {
    const char	*src = "aaabaa";
    const char	*dst = "aaacaa";
	
	printf("ptr    = %d\n", ft_strncmp(dst, src, 4));
    printf("ptr    = %d\n", strncmp(dst, src, 4));
	return 0;
}
