#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const char *t;
	
	i = 0;
	t = s;
	while (i < n)
	{
		if (t[i] == c)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}
