#include "hash_tables.h"
/**
 * key_index - check code.
 * @hey: constant unsigned char variable
 * @size: long unsigned integer variable
 * Return: function's value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
