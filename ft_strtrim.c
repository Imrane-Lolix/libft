#include "libft.h"

static int	is_space(char c) 
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	size_t start;
	size_t end;
	char *str;

	if (s == NULL)
		return (NULL);

	start = 0;
	while (s[start] && is_space(s[start]))
		start++;

	end = ft_strlen(s);
	while (end > start && is_space(s[end - 1]))
		end--;

	str = (char *)malloc(end - start + 1);
	if (str == NULL)
		return (NULL);

	ft_strncpy(str, s + start, end - start);

	return (str);
}



