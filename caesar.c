#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{
    //checks
    if (argc == 2 && isdigit(*argv[1]))
    {
        //interate
        for (int k = 0; k < strlen(argv[1])); k++)
        {
            //return 1
            if (!isdigit(argv[1][k]))
            {
                printf("Usage: ./ceasar key \n");
                return 1;
            }
        }

        // turn argv
        int i = atoi(argv[1]);

        // cheack integer
        if (i <= 0)
        {
            printf("Usage: ./ceasar key \n");
            return 0;
        }
        else
        {
            // get input text as plaintxt
            string plaintext = get_string("plaintext: ");

            int n = strlen(plaintext);
            char ciphertext [n];

            // inte


        }
    }
}