#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	if (s == NULL)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strcpy(str, s);
	return (str);
}
