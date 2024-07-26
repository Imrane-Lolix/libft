#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s == NULL || start == 0)
		return (NULL);
	
	str = (char *)malloc(sizeof(char) * (len));
	if (str == NULL)
		return (NULL);

	ft_strncpy(str ,s + start, len);

	return (str);
}
