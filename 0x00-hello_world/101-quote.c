#include <stdio.h>
#include <unistd.h>

/**
  * main - prints exactly "and that piece of art is useful"
  * - Dora Korpar, 2015-10-19",
  * followed by a new line, to the standard error.
  * Return: Always 1 (success)
  */

int main(void)
{
	fputs(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-29\n", stdout);
	return (1);
}
