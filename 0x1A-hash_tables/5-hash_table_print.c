#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table.
 *
 *@ht: hash table to be printed out
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx, end;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (idx = 0, end = 1; idx < ht->size; idx++)
	{
		for (tmp = ht->array[idx]; tmp != NULL; tmp = tmp->next)
		{
			printf("%s'%s': '%s'", end == 1 ? "" : ",", tmp->key, tmp->value);
			end = 0;
		}
	}
	printf("}\n");
}
