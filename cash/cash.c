#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer has
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum # of the coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%d\n", coins);
}

int get_cents(void)
{
    // ask user to input how many cents they have
    int cents;
    do
    {
        cents = get_int("Input a number for how many cents you have");
        printf("Change owed: %d\n", cents);
    }
    while (cents < 0);
    return cents;
}

//calculate how many quarters
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters = quarters + 1;
        cents = cents - 25;
    }
    return quarters;
}

//calculate how many dimes
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes = dimes + 1;
        cents = cents - 10;
    }
    return dimes;
}

//calculate how many nickels
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels = nickels + 1;
        cents = cents - 5;
    }
    return nickels;
}

//calculate how many pennis
int calculate_pennies(int cents)
{
    int pennis = 0;
    while (cents >= 1)
    {
        pennis = pennis + 1;
        cents = cents - 1;
    }
    return pennis;
}
