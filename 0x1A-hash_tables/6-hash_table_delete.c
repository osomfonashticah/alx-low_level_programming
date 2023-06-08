
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_nod_t *nod, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nod = ht->array[i];
			while (nod != NULL)
			{
				temp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
