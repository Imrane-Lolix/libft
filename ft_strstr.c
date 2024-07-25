#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(needle);
	i = 0;
	while (haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
