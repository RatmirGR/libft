#include "libft.h"

static size_t	ft_addtext(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	p = NULL;
	i = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)malloc((i + 1) * sizeof(char));
	if (p != NULL)
	{
		i = 0;
		i += ft_addtext(&p[i], s1);
		i += ft_addtext(&p[i], s2);
		p[i] = '\0';
	}
	return (p);
}
