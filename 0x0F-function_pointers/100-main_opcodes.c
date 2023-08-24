#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Function that prints the opcodes of this program
 * @a: For the address of the main function
 * @n: For the number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int m;

for (m = 0; m < n; m++)
{
printf("%.2hhx", a[m]);
if (m < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - Function that prints the opcodes of its own main function
 * @argc: For the argument count
 * @argv: For the argument vector
 *
 * Return: O
 */
int main(int argc, char **argv)
{
int u;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
u = atoi(argv[1]);
if (u < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, u);
return (0);
}
