#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int		size;

	if (fd != -1)
	{
		size = 1;
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			size = -size;
		}
		num = n;
		while ((num / 10) != 0)
		{
			num /= 10;
			size *= 10;
		}
		while (size != 0)
		{
			num = n / size;
			n %= size;
			size /= 10;
			ft_putchar_fd((num + '0'), fd);
		}
	}
}
