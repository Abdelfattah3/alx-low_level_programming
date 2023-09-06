#include "main.h"
#include <elf.h>
/**
 * main - ELF
 * @argc: number of arguments.
 * @argv: arguments values.
 * Return: success (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	return (0);
}
