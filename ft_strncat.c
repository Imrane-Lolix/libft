#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = 0;
	while (src[src_len] && src_len < n)
		dst[dst_len++] = src[src_len++];
	return (dst);
}
