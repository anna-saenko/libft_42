#include "libft.h"

static long long	find_abs_val(long long n)
{
	return ((n < 0) ? -n : n);
}

static int	count_digits(long long n)
{
	int count;

	count = 1;
	while (n /= 10)
	{
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	long long	abs_n;
	int			num_digits;
	char		*result;
	int			index;

	is_negative = (n < 0) ? 1 : 0;
	abs_n = find_abs_val((long long)n);
	num_digits = count_digits(abs_n);
	result = (char *)malloc((num_digits + is_negative + 1) * sizeof(char));
	if (!result)
		return NULL;
	if (is_negative)
		result[0] = '-';
	index = num_digits + is_negative - 1;
	result[index + 1] = '\0';
	while (index >= is_negative)
	{
		result[index] = (abs_n % 10) + '0';
		abs_n /= 10;
		index--;
	}
	return (result);
}
