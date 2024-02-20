#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_res(char* fname, int a, int b, int c)
{
	printf("%s\n", fname);
	printf("Result for %c: %d, Real function: %d\n", a, b, c);
}

void	print_str_res(char *fname, char *str, size_t a, size_t b)
{
	printf("%s\n", fname);
	printf("Result for %s: %zu, Real function: %zu\n", str, a, b);
}

void	memcpy_test(void)
{
	char	src[] = "this is a source string";
	char	dest[10];

	printf("Src: %s\n", src);
	ft_memcpy(dest, src, 4);
	printf("Res: %s\n", dest);
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
	print_res("isprint", c, ft_isprint(c), isprint(c));
	c = 123;
	print_res("isprint", c, ft_isprint(c), isprint(c));
	
	char *str;
	str = "Hello, how are you?";
	print_str_res("strlen", str, ft_strlen(str), strlen(str));

// memset
	char obj[] = "This is an initial string";
	printf("memset\nInitial string: %s\nResult:", obj);
	c = 'A';
	ft_memset(obj, c, 10);
	printf("%s\n", obj);

//bzero
	printf("bzero\nInitial string: %s\nResult:", obj);
	ft_bzero(obj, 5);
	int j;
	for(j = 0; j < 25; j++)
	{
		printf("%c", obj[j]);
	}
	printf("\n");

	memcpy_test();
}
