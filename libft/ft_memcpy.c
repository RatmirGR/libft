#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (dest != src)
	{
		d = (unsigned char *)dest;
		s = (unsigned char *)src;
		i = 0;
		while (n--)
		{
			d[i] = s[i];
			++i;
		}
	}
	return (dest);
}
