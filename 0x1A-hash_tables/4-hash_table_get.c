#include "hash_tables.h"

/**
* hash_table_get - retrieves the value associated with a key
* @ht: hash table
* @key: key
*
* Return: value associated with the element
* if key not found, returns NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	key_idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[key_idx] != NULL)
	{
		temp = ht->array[key_idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);

			temp = temp->next;
		}
	}

	if (ht->array[key_idx] != NULL && strcmp(ht->array[key_idx]->key, key) == 0)
		return (ht->array[key_idx]->value);

	return (NULL);
}
