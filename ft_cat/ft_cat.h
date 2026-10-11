#ifndef FT_CAT_H
# define FT_CAT_H

#include <unistd.h>
#include <fcntl.h>

# define BUFFER_SIZE 4096

void	ft_putstr_fd(char *str, int fd);
int		ft_cat(char *filename);

#endif
