#include "hash_tables.h"
/**
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *node;
	unsigned long int count;
	unsigned char commaFlag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (commaFlag == 1)
		{
			printf(", ");
		}
		node = ht->array[count];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value)
			node = node->next;
			if (node != NULL)
			{
				printf(", ");
			}
		}
		commaFlag = 1;
	}
	printf("}\n");
}
