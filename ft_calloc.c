#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (void *)malloc(size * count);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, count);
	return (arr);
}