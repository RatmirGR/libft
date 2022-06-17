#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	g;
	char	*p;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && (ft_strchr(set, s1[i])))
		++i;
	j = ft_strlen(s1);
	while (j > i && (ft_strrchr(set, s1[j - 1])))
		--j;
	p = NULL;
	p = (char *)malloc((j - i + 1) * sizeof(char));
	if (p != NULL)
	{
		g = 0;
		while (i < j)
			p[g++] = s1[i++];
		p[g] = '\0';
	}
	return (p);
}
