#include <stdio.h>

int main(void)
{
    // initialization
    int bl, tb, nl;
    // assignment
    bl = tb = nl =0;

    char c;
    // start the loop to get chars
    while ((c = getchar()) != EOF)
    {
        // check if blank space
        if (c == ' ')
        {
            // add to counter "Number of Blanks:"
            ++bl;
        }
        // check if tab
        else if (c == '\t')
        {
            // add to counter "Number of Tabs"
            ++tb;
        }
        // check of new line
        else if (c == '\n')
        {
            // add to counter "Number of Newlines"
            ++nl;
        }
    }
    // print the results
    printf("Number of Blanks: %d\nNumber of Tabs: %d\nNumber of Newlines: %d\n", bl, tb, nl);
    return 0;
}