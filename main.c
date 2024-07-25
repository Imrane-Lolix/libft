#include <stdio.h>
#include "libft.h"
#include "ft_strchr.c"

int main() {
    const char	*src = 0;
    //char		dst[5] = "aaa";
	
	printf("ptr    = %p\n", ft_strchr(src, 'b'));
    //printf("ptr    = %p\n", strchr(src, 'b'));
	return 0;
}
