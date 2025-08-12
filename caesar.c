#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>  // para bool em C padrão

// protótipos
bool only_digits(char *s);
char rotate(char c, int k);

int main(int argc, char *argv[])
{
    // check
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // valida
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // converte
    int key = atoi(argv[1]);

    // pega o texto
    char plaintext[1024];  // buffer para entrada

    printf("plaintext:  ");
    if (fgets(plaintext, sizeof(plai
