#include <stdio.h>
#include "libft.h"
#include "ft_strcpy.c"
#include "ft_strlen.c"
#include "ft_strdup.c"

int main() {
    const char *src = "My name is Imrane\0";
    char *dst;
	dst = ft_strdup(src);
    printf("%s\n", dst); // prints "Hello, World!"
	free(dst);
    return 0;
}
