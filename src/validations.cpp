#include	"../include/shooter.h"

int	arg_check(int argc, char **argv)
{
	if (argc != 1)
		return (1);
	if (strncmp(argv[0], "./shooter", strlen(argv[0])) != 0)
		return (1);
	return (0);
}
