#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, str_len(s));
		write(fd, '\n', 1);
	}
}