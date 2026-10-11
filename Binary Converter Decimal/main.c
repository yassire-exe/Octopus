#include "ft.h"

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc != 2)
		return (1);
	n = 0;
	i = 0;
	while (argv[1][i])
	{
		n = n * 10 + (argv[1][i] - '0');
		i++;
	}
	print_binary(n);
	ft_putchar('\n');
	return (0);
}
