#include "hash_tables.h"
/**
 * hash_table_set - check code.
 * @ht: hash_node_t variable
 * @key: constant character variable
 * @value: constant character variable
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valueCopy;
	unsigned long int index, count;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	valueCopy = strdup(value);
	if (valueCopy == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (count = index; ht->array[count]; count++)
	{
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = valueCopy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valueCopy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valueCopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
