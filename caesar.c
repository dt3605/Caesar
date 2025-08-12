#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// prot
bool only_digits(string s);
char rotate(char c, int k);

int main(int argc, string argv[])
{
    // checa
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
    string plaintext = get_string("plaintext:  ");

    // cript
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    return 0;
}

// retornar verdadeiras
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit((unsigned char) s[i]))
        {
            return false;
        }
    }
    return true;
}

// rotaionar caractreree
char rotate(char c, int k)
{
    if (isupper((unsigned char) c))
    {
        return 'A' + (c - 'A' + k) % 26;
    }
    else if (islower((unsigned char) c))
    {
        return 'a' + (c - 'a' + k) % 26;
    }
    else
    {
        return c;
    }
}
