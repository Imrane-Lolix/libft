#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strlen.c"
#include "ft_atoi.c"

int main() {
    const char *n = "     \t\t--1337";
	
	printf("ptr    = %d\n", ft_atoi(n));
    printf("ptr    = %d\n", atoi(n));
	return 0;
}
