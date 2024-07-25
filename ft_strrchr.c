#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

