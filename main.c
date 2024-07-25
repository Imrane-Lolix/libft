#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strlen.c"

int main() {
    const char	*src = "aaaaaba";
    const char	*dst = "ba";
	
	printf("ptr    = %p\n", ft_strnstr(src, dst, 1));
    ///printf("ptr    = %p\n", strnstr(src, dst, 1));
	return 0;
}
