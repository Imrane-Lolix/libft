#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t n);
char	*ft_strchr(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strrchr(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2);

#endif
