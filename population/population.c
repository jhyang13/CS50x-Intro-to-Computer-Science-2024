#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Input a population size for start:");
        printf("Start size: %d\n", start_size);
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("Input a population size for end:");
        printf("End size: %d\n", end_size);
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int v_1 = start_size;
    int year = 0;
    while (v_1 < end_size)
    {
        v_1 = v_1 + v_1 / 3 - v_1 / 4;
        year = year + 1;
    }

    // TODO: Print number of years
    printf("Years: %d\n", year);
}
