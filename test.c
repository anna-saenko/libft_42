#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void print_res(char* fname, int a, int b, int c)
{
	printf("%s\n", fname);
	printf("Result for %c: %d, Real function: %d\n", a, b, c);
}

int	main(void)
{
	int	c;
	c = 'A';
	print_res("isalpha", c, ft_isalpha(c), isalpha(c));
	c = 'a';
	print_res("isalpha", c, ft_isalpha(c), isalpha(c));
	c = '-';
	print_res("isalpha", c, ft_isalpha(c), isalpha(c));
	print_res("isdigit", c, ft_isdigit(c), isdigit(c));
	c = '9';
	print_res("isdigit", c, ft_isdigit(c), isdigit(c));
	c = '\t';
	print_res("isalnum", c, ft_isalnum(c), isalnum(c));
	c = '3';
	print_res("isalnum", c, ft_isalnum(c), isalnum(c));
	c = 'j';
	print_res("isalnum", c, ft_isalnum(c), isalnum(c));
	print_res("isascii", c, ft_isascii(c), isascii(c));
	c = 128;
	print_res("isascii", c, ft_isascii(c), isascii(c));
}
