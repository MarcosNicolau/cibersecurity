#include <stdlib.h>
#include <stdio.h>

int calculateValidCode(int user_id)
{
    int x = user_id * 786 * 17 / 12;
    return x + 1991;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("You must provide your user id as an argument\n");
        return 1;
    }

    char *arg = argv[1];
    int user_id = atoi(arg);
    if (user_id <= 0 || user_id >= 10000)
    {
        printf("User id must be a 4 digits number\n");
        return 1;
    }

    printf("Valid code is: %d\n", calculateValidCode(user_id));
}