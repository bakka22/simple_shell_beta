#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	ssize_t i;
	char buf[2] = "$ ", buf2[20];

	while (1)
	{
		write(1, buf, 2);
		i = read(0, buf2, 19);
		write(1, buf2, i);
	}
	return (0);
}