/* longstrings.c
 * sourcefile for longstrings, a program practicing declaring/defining long
 * strings in a program. It will also experiment with using universal char-
 * acters.
 *
 * A program written by me to experiment with creating long strings and using
 * universal characters.
 *
 * Programmer: Mark Crapser
 *
 *
 */


#include <stdio.h>

int main(int argc, char *argv[]) {

    /* create a string over two lines and print it out */
    /* using various methods.                          */

    const char str1[] = "Mary had a little lamb, her fleece was white "
    "as snow. And everywhere that Mary went, the lamb was sure to go.";

    printf("%s\n", str1);



    printf("\U0001f602 \n");




    return(0);
}
