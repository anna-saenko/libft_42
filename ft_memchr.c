#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char	*ptr_cpy;
	unsigned char	c;
	size_t			i;

	ptr_cpy = (unsigned char *)ptr;
	c = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (ptr_cpy[i] == c)
		{
			return (ptr_cpy + i);
		}
		i++;
	}
	return (NULL);
}
