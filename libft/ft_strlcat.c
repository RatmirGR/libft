#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	g;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i > size)
		return (j + size);
	j = 0;
	g = i;
	while (src[j])
	{
		if (size != 0 && i < size - 1)
		{
			dst[i] = src[j];
			++i;
		}
		++j;
	}
	dst[i] = '\0';
	return (g + j);
}
