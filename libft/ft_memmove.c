#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest != src)
	{
		d = (unsigned char *)dest;
		s = (unsigned char *)src;
		i = 0;
		if (d < s)
		{
			while (n--)
			{
				d[i] = s[i];
				i++;
			}
		}
		else
			while (n--)
				d[n] = s[n];
	}
	return (dest);
}
