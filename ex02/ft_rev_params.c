#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	j;

	while (argc > 0)
	{
		j = 0;
		while (argv[argc] != '\0')
		{
			write(1, &argv[argc], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
