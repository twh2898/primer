#include <stdlib.h>
#include <stdio.h>

int get_naturals(int* list, int len)
{
    int count = 0;
    int i = 2;
    int j;

    while (count < len)
    {
        for (j = 2; j < i; j++)
            list[count++] = i * j;
        i++;
    }

    return count;
}

int main(int argc, char** argv)
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: %s <number of naturals>\n", argv[0]);
        return 0;
    }
    int len = atoi(argv[1]);
    printf("Primer collecting %d numbers\n", len);

    int naturals[len];
    int i = 1;

    get_naturals(&naturals[0], len);

    printf("Those numbers are:\n");
    for (i = 0; i < len; i++)
    {
        printf("\tNatural %d is %d\n", i, naturals[i]);
    }

    printf("Cleaning Up\n");

    return 0;
}
