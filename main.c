#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av) {
	int fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);

	if (fd == -1) return (1);

	printf("fd = %d\n", fd);
	write(fd, av[1], strlen(av[1]));
	close(fd);
	return 0;
}
