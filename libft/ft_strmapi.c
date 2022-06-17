#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = 0;
	while (s[len])
		++len;
	p = NULL;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p != NULL)
	{
		i = 0;
		while (i < len)
		{
			p[i] = f(i, s[i]);
			++i;
		}
		p[i] = '\0';
	}
	return (p);
}
