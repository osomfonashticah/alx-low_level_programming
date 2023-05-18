#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *cdx;
	int len = strlen(argv[1]), i, tp;

	cdx = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tp = (len ^ 59) & 63;
	password[0] = cdx[tp];

	tp = 0;
	for (i = 0; i < len; i++)
		tp += argv[1][i];
	password[1] = cdx[(tp ^ 79) & 63];

	tp = 1;
	for (i = 0; i < len; i++)
		tp *= argv[1][i];
	password[2] = cdx[(tp ^ 85) & 63];

	tp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tp)
			tp = argv[1][i];
	}
	srand(tp ^ 14);
	password[3] = cdx[rand() & 63];

	tp = 0;
	for (i = 0; i < len; i++)
		tp += (argv[1][i] * argv[1][i]);
	password[4] = cdx[(tp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tp = rand();
	password[5] = cdx[(tp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
