#include "includes/libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	long nb = 100;
	long kick = 2;

	long result = ft_math_sqrt(nb, kick);
	printf("result: %ld\n", result);

	char *line = NULL;
	int fd = open("file.txt", O_RDONLY);

	line = get_next_line(fd);
	printf("%s\n", line);
}