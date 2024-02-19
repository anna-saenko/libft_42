#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A';
	printf("Result for uppercase: %d", ft_isalpha(c));
	c = 'a';
	printf("Result for lowercase: %d", ft_isalpha(c));
	c = '-';
	printf("result for non-alpha: %d", ft_isalpha(c));
}
