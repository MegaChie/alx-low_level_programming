#include "hash_tables.h"
/**
 * hash_djb2 - check code.
 * @str: constant unsigned char variable
 * Return: hash's value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count;
	}
	return (hash);
}
