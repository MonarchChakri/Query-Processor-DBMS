#pragma once
#include "functionprototypes.h"

typedef struct pair
{
	char* key;
	void* value;
	pair* next;
}pair;

typedef struct
{
	pair** table;
	int size;
}hashtable;

void emptyhashtable(hashtable** ht);

pair* createnode(char* key, void* value)
{
	pair* newnode = (pair*)malloc(sizeof(pair));
	newnode->key = (char*)malloc(strlen(key) * sizeof(char));
	strcpy(newnode->key, key);
	newnode->value = value;
	newnode->next = NULL;
	return newnode;
}

void createhashtable(hashtable ** ht, int size)
{
	emptyhashtable(ht);
	*ht = (hashtable*)malloc(sizeof(hashtable));
	(*ht)->size = size;
	(*ht)->table = (pair**)malloc(size * sizeof(pair*));
	for (int i = 0; i < (*ht)->size; i++)
	{
		(*ht)->table[i] = createnode("", "");
	}
}

int hash(hashtable* ht, char* key)
{
	int hashvalue;
	int keyint = 0;
	for (int i = 0, n = strlen(key); i < n; i++)
		keyint += key[i] * (i + 1);
	hashvalue = keyint % ht->size;
	return hashvalue;
}

void putpair(hashtable* ht, pair p)
{
	int hashvalue = hash(ht, p.key);
	if (ht->table[hashvalue]->next == NULL)
	{
		ht->table[hashvalue]->next = createnode(p.key, p.value);
	}
	else{
		pair* temp = ht->table[hashvalue]->next;
		pair* prev = ht->table[hashvalue];
		while (prev->next != NULL)
		{
			if (!strcmp(temp->key, p.key))
			{
				temp->value = p.value;
				return;
			}
			prev = temp;
			temp = temp->next;
		}
		prev->next = createnode(p.key, p.value);
	}
}

void* getvalue(hashtable* ht, char* key)
{
	int hashvalue = hash(ht, key);
	if (ht->table[hashvalue]->next == NULL)
	{
		return NULL;
	}
	if (!strcmp(ht->table[hashvalue]->next->key, key))
	{
		return ht->table[hashvalue]->next->value;
	}
	else
	{
		pair* prev = ht->table[hashvalue];
		pair* temp = ht->table[hashvalue]->next;
		while (prev->next != NULL)
		{
			if (!strcmp(temp->key, key))
			{
				return temp->value;
			}
			prev = temp;
			temp = temp->next;
		}
	}
	return NULL;
}

void emptyhashtable(hashtable** ht)
{
	if (*ht == NULL)
		return;
	free(*ht);
	*ht = NULL;
}