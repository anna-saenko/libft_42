#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	signExist;

	res = 0;
	sign = 1;
	signExist = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (signExist)
			return (0);
		else if (*str == '-')
			sign = -1;
		str++;
		signExist = 1;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
