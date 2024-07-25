#include <stdio.h>
#include "libft.h"
#include "ft_strrchr.c"
#include "ft_strlen.c"

int main() {
    const char	*src = "aaaba";
    //char		dst[5] = "aaa";
	
	printf("ptr    = %p\n", ft_strrchr(src, 'b'));
    printf("ptr    = %p\n", strrchr(src, 'b'));
	return 0;
}
