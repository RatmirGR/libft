#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)&big[0]);
	i = 0;
	while (big[i] && (len--))
	{
		j = 0;
		while (big[i + j] == little[j] && (j <= len))
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			++j;
		}
		++i;
	}
	return (0);
}
