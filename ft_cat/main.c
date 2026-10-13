#include "ft_cat.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr_fd("Usage: ./ft_cat fichier\n", 2);
		return (1);
	}
	return (ft_cat(argv[1]));
}
