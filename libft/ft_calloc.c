#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = NULL;
	p = malloc(nmemb * size);
	if (p != NULL)
		ft_memset(p, 0, nmemb * size);
	return (p);
}
