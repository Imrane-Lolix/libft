#include <stdio.h>
#include "libft.h"
#include "ft_strncmp.c"
#include "ft_strstr.c"
#include "ft_strlen.c"

int main() {
    const char	*src = NULL;
    const char	*dst = "ba";
	
	printf("ptr    = %p\n", ft_strstr(src, dst));
    printf("ptr    = %p\n", strstr(src, dst));
	return 0;
}
