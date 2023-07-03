#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
printf("------------------------------------\n");
p = rot13(s);
printf("%s", p);
printf("------------------------------------\n");
printf("%s", s);
return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-rot13.c -o 100-rot13
julien@ubuntu:~/0x06$ ./100-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/0x06$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 100-rot13.c
   
9. Numbers have life; they're not just symbols on paper
#advanced
Write a function that prints an integer.

Prototype: void print_number(int n);
You can only use _putchar function to print
You are not allowed to use long
You are not allowed to use arrays or pointers
You are not allowed to hard-code special values
julien@ubuntu:~/0x06$ cat 101-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_number(98);
_putchar('\n');
print_number(402);
_putchar('\n');
print_number(1024);
_putchar('\n');
print_number(0);
_putchar('\n');
print_number(-98);
_putchar('\n');
return (0);
}
