#include "hash_tables.h"

/**
* hash_table_set - adds a new element to the hash table
* @ht: hash table
* @key: key
* @value: value
*
* Return: 1 success, 0 failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);

	temp->key = strdup(key);
	if (*value != '\0')
		temp->value = strdup(value);
	else
		temp->value = '\0';
	temp->next = NULL;

	temp->next = ht->array[key_idx];
	ht->array[key_idx] = temp;

	return (1);
}
