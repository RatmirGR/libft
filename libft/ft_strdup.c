#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = ft_strlen(s);
	p = NULL;
	p = (char *)malloc((i + 1) * sizeof(char));
	if (p != NULL)
	{
		i = 0;
		while (s[i])
		{
			p[i] = s[i];
			++i;
		}
		p[i] = '\0';
	}
	return (p);
}
