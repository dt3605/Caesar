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
    if (fgets(plaintext, sizeof(plaintext), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }
    // remove \n final se existir
    plaintext[strcspn(plaintext, "\n")] = '\0';

    // criptografa
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    return 0;
}

// retorna true se todos dígitos
bool only_digits(char *s)
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

// rotaciona caractere
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
