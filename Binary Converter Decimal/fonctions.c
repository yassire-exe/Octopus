#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_binary(int n)
{
	if (n > 1)
		print_binary(n / 2);
	ft_putchar((n % 2) + '0');
}
