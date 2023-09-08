#include "hash_tables.h"

/**
  * hash_table_create - creates a hash table.
  * @size: size of the hash table.
  *
  * Return: pointer to the newly created hash table. or
  * null on fail.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);
	hashtable->size = size;
	hashtable->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}
