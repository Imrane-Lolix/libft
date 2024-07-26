#include "libft.h"

static int	count_words(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;

	while (s[i])
	{
		if (s[i] == c) 
			i++;
		else 
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static void free_arr(char **arr, int size)
{
	int i;

	i = 0;
	while (i < size)
		free(arr[i++]);
	free(arr);
}

char	**ft_strsplit(char const *s, char c) 
{
	char **arr;
	int n_words;
	int arr_i;
	int start;
	int i;

	n_words = count_words(s, c);
	arr = (char **)malloc(n_words + 1);
	if (arr == NULL)
		return (NULL);

	arr_i = 0;
	i = 0;
	start = 0;
	while (arr_i < n_words)
	{
		while (s[i])
		{
			if (s[i] == c) 
				i++;
			else 
			{
				start = i;
				while (s[i] != c && s[i]) 
					i++;
				arr[arr_i] = ft_strndup(s + start, i - start);
				if (arr[arr_i] == NULL) 
				{
					free_arr(arr, arr_i);
					return (NULL);
				}
				break;
			}
		}
		arr_i++;
	}
	arr[arr_i] = NULL;
	return (arr);
}
