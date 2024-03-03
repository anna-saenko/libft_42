#include "libft.h"

static unsigned int	ft_checkstart(char const *s1, char const *set)
{
	int	count;

	count = 0;
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
	{
		count++;
		s1++;
	}
	return (count);
}

static unsigned int	ft_checkend(char const *s1, size_t len, char const *set)
{
	int	count;

	count = 0;
	while (len > 0 && ft_strchr(set, s1[len - 1]) != NULL)
	{
		count++;
		len--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	unsigned int	start;
	unsigned int	end;
	char			*res;

	if (!s1 || !set)
	{
		return (NULL);
	}
	len = ft_strlen((char *)s1);
	start = ft_checkstart(s1, set);
	end = ft_checkend(s1, len, set);
	len = len - ((size_t)start + (size_t)end);
	res = ft_substr(s1, start, len);
	return (res);
}
