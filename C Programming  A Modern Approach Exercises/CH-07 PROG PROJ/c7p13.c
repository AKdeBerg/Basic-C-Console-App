#include <stdio.h>
#include <stdbool.h>


int main()
{
    char ch;
    int numWords = 0, numLetters = 0;
    bool spaceBeforeLetter = true;

    while( (ch = getchar()) != '\n' )
    {
        if (ch == ' ')
        {
            /* code */
            spaceBeforeLetter = true;
        }

        else
        {
            numLetters++;

            if (spaceBeforeLetter)
            {
                /* code */
                numWords++;
            }

            spaceBeforeLetter = false;
        }
    }

     printf("Average word length: %.1f\n", numLetters/(float)numWords);
}