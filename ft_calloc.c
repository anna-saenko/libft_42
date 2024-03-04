#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size == SIZE_MAX || count == SIZE_MAX || size * count == 0)
		return (void *)malloc(0);
	if ((size == SIZE_MAX && count == SIZE_MAX) ||
		(size != 0 && count >= SIZE_MAX / size) || size * count == SIZE_MAX)
		return (NULL);
	arr = (void *)malloc(size * count);
	if (!arr)
	{
		return (NULL);
	}
	ft_bzero(arr, count * size);
	return (arr);
}