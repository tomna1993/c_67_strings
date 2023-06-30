#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Save Hi! somewhere into the memory and save the address of the first letter (H) to the string pointer
    char *string = "Hi!";

    // Print the string
    printf ("%s\n", string);

    // Print the address of the first character
    printf ("Address of H is %p\n", string);

    // Print the first character
    printf ("%c\n", *string);

    // Print the address of the second character
    printf ("Address of i is %p\n", string + 1);

    // Print the second character
    printf ("%c\n", *(string + 1));

    // Print the address of the third character
    printf ("Address of ! is %p\n", string + 2);

    // Print the third character
    printf ("%c\n", *(string + 2));

    printf ("\nPrint string but after printing increment the address by one:\n");

    printf ("%s\n", string);
    printf ("%s\n", string + 1);
    printf ("%s\n", string + 2);

    return EXIT_SUCCESS;    
}