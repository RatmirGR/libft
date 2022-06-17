#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (s == '\0')
		return (NULL);
	i = ft_strlen(s);
	if (start > i)
		len = 0;
	else if (len > i)
		len = i;
	p = NULL;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p != NULL)
	{
		i = 0;
		while (len--)
		{
			p[i] = s[start];
			++i;
			++start;
		}
		p[i] = '\0';
	}
	return (p);
}
