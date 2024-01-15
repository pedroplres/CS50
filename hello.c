#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //string to get name from user
    string name = get_string("what is your name?\n");
    //funcao a dizer hello na string no local do place holder de modo a ir buscar o valor do hello.
    printf("hello, %s\n", name);
}