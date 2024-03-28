#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input for height you want
    int height;
    do
    {
        height = get_int("Input a number for height");
    }
    while (height <= 0 || height >= 9);

    // output result
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1 ; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}