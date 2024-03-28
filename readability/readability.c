#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

void grade_re(int);
int count(string text);
int coleman(int, int, int);

// Global variables
// l = letters, w = words, s = sentences
int l, w, s;
int grade;

int main(void)
{
    // Input the text
    string text;
    text = get_string("Input the text for grade ");

    // Count # of the letter, word and sentence in the text; Use the Coleman index formula to grade the text
    count(text);
    coleman(l, w, s);

    // Output grade result
    grade_re(grade);
}

// Count # of the letter, word and sentence in the text
int count(string text)
{
    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]) > 0)
        {
            letters = letters + 1;
        }
        if (text[i] == ' ')
        {
            words = words + 1;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences = sentences + 1;
        }
    }
    return l = letters, w = words, s = sentences;
}

// Use the Coleman index formula to grade the text
int coleman(int v_1, int v_2, int v_3)
{
    return grade = round(0.0588 * (v_1 / ((float)v_2 / 100)) - 0.296 * (v_3 / ((float)v_2 / 100)) - 15.8);
}

// Output grade result
void grade_re(int result)
{
    if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (result >= 1 && result < 16)
    {
        printf("Grade %d\n", result);
    }
    else if (result >= 16)
    {
        printf("Grade 16+\n");
    }
}