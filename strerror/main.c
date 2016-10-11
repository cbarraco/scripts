#include <errno.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int i;
    for (i = 1; i < argc; i++)
    {
        int err = atoi(argv[i]);
        char *errmsg = strerror(err);
        printf("%s\n", errmsg);
    }
    return 0;
}
