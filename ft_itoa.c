#include "libft.h"

static int count_digits(int n)
{
	if (n < 0) n = -n;
	if (n == 0 || n < 10) return 1;
	return (1 + count_digits(n / 10));
}

char *ft_itoa(int n)
{
	char *a;
	int nbr;
	int len;

	len = count_digits(n);
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	else
		nbr = n;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	if (n < 0)
		a[0] = '-';
	a[len] = '\0';
	while (len-- && a[len] != '-')
	{
		a[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (a);
}
