#include <stdio.h>

#define BUFFER 100

int main(void)
{
    int histogram[BUFFER] = {0};        // Initialize array with 100 items, init all with 0
    int histogram_len = 0;              // Initialize histogram lenght var
    int max_word_count = 0;             // Initialize word count var
    int c = 0;                          // Initialize variable for one char
    int max_word_count_index = 0;       // Initialize word count index

    // get user input, check if it's end of file, if EOF than stop
    while ((c = getchar()) != EOF)
    {
        // check of char is blank, new line or tab
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (max_word_count > 0)
            {
                ++histogram[max_word_count - 1];

                if (histogram[max_word_count - 1] > max_word_count)
                {
                    max_word_count = histogram[max_word_count - 1];
                }

                if (histogram_len < max_word_count)
                {
                    histogram_len = max_word_count;
                }

                max_word_count = 0;
            }
        }
        else
        {
            ++max_word_count;
        }
    }

    int col = 0;
    int line = 0;

    printf("Horizontal Histogram\n--------------------\n");

    for (col = 0; col < histogram_len; ++col)
    {
        printf("%3d: \t", col + 1);
        for (line = 0; line < histogram[col]; ++line)
        {
            putchar('#');
        }
        putchar('\n');
    }

    // Print a vertical histogram
    printf("Vertical Histogram\n------------------\n");

    for (line = max_word_count; line >= 0; --line)
    {
        col = 0;
        while (histogram[col] != '$')
        {
            if (line == 0)
            {
                printf("%2d ", col + 1);
            }
            else if (histogram[col] >= line)
            {
                printf("## ");
            }
            else
            {
                printf("   ");
            }
            ++col;
        }
        putchar('\n');
    }
    return 0;
}
