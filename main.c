#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];


    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello, %s!\n", name);
=======

    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> ccdb7f7bda3d0a303d4cb153dcde8dda139add95
    return 0;
}
