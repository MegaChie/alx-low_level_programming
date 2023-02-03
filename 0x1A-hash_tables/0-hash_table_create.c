#include "hash_tables.h"
/**
 * hash_table_create - check code.
 * @size: long unsigned integer variable
 * Return: NULL or address
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTableCreated;
	unsigned long int count;

	hashTableCreated = malloc(sizeof(hash_table_t));
	if (hashTableCreated == 0)
	{
		return (NULL);
	}
	hashTableCreated->size = size;
	hashTableCreated->array = malloc(sizeof(hash_node_t) * size);
	if (hashTableCreated->array == 0)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		hashTableCreated->array[count] = NULL;
	}
	return (hashTableCreated);
}
