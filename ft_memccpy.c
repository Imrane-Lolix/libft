#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*t_dst;
	const char	*t_src;

	t_dst = dst;
	t_src = src;
	while (n--)
	{
		*t_dst = *t_src;
		if (*t_src == c)
			return (t_dst + 1);
		t_dst++;
		t_src++;
	}
	return (NULL);
}
