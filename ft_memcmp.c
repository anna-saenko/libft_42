#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	unsigned char	*lhs_cpy;
	unsigned char	*rhs_cpy;

	lhs_cpy = (unsigned char *)lhs;
	rhs_cpy = (unsigned char *)rhs;
	while (count--)
	{
		if (*lhs_cpy != *rhs_cpy)
		{
			return ((unsigned char)*lhs_cpy - (unsigned char)*rhs_cpy);
		}
		lhs_cpy++;
		rhs_cpy++;
	}
	return (0);
}