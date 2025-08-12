Caesar Cipher
This is a simple program that implements the Caesar cipher. It shifts each letter in the plaintext by a number of positions defined by the user’s key.

What it does

- Takes a single numeric key as a command-line argument
- Validates that the key contains only digits
- Prompts the user to enter plaintext
- Encrypts the plaintext by shifting letters by the key value
- Preserves uppercase and lowercase letters
- Leaves non-alphabetic characters unchanged
- Prints the resulting ciphertext

How to use

- Compile the code with:
gcc -o caesar caesar.c
- Run the program passing a numeric key as argument:
./caesar 3
- When prompted, enter the text you want to encrypt.

About
This project practices basic C programming concepts such as command-line arguments, string manipulation, loops, conditionals, and character handling.

CS50x — Introduction to Computer Science by Harvard University
Project by Davi Teodoro
