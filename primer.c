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
    int len = 5;
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
