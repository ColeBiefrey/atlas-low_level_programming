#ifndef __HASH__
#define __HASH__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct shash_node_s - node of sorted hash table
 * @key: key, string
 * The key is unique in hashtable
 * @value: value corresponding to key
 * @next: pointer to next node of list
 * @sprev: pointer to previous element of sorted linked list
 * @snext: pointer to next element of sorted linked list
 */

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - sorted hash table data structure
 * @size: size of array
 * @array: array of size @size
 * @shead: pointer to first element of sorted linked list
 * @stail: pointer to last element of sorted linked list
 */

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

/**
 * struct hash_node_s - node of hash table
 * @key: key, string
 * key is unique in hashtable
 * @value: value corresponding to key
 * @next: pointer to next node of list
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hashtable data structure
 * @size: size of array
 * @array: array of size @size
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_node_t *add_n_hash(hash_node_t**, const char*, const char*);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif