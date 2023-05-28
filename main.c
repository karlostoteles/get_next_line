# include "get_next_line.h"

int main()
{
    int fd;

    fd = open("pepe.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }

    close(fd);
    return 0;
}

