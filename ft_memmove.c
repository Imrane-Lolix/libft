#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dst;
	s = src;

	if (d < s)
		return (ft_memcpy(dst, src, n));
	d += n;
	s += n;
	while (n--)
		*d-- = *s--;
	return (dst);
}
