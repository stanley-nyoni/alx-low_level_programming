#include "hash_tables.h"

/**
* hash_table_create - creats a hash table
* @size: size of the table
*
* Return: new table if successful
* else, Null
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	table->array = array;
	table->size = size;

	return (table);
}
