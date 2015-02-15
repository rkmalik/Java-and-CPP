#include "Header.h"

HashTable::HashTable() {
	hash = new HashItem *[MAP_SIZE];

	for (int i = 0; i < MAP_SIZE; i++)
		hash[i] = NULL;
}

HashTable::~HashTable() {

	for (int i = 0; i < MAP_SIZE; i++)
		delete hash[i];
	delete[] hash;
}

void HashTable::put(int key, int value) {

	int index = key % MAP_SIZE;

	// Loop till the key is not already set or We have not found the null entry
	while (hash[index] != NULL && hash[index]->getKey() != key) {
		index = (index + 1) % MAP_SIZE;
	}

	hash[index] = new HashItem(key, value);
}

int HashTable::get(int key) {

	int index = key % MAP_SIZE;

	while ((hash[index] != NULL) && (hash[index]->getKey() != key)) {
		index = (index + 1) % MAP_SIZE;
	}

	if (hash[index] == NULL)
		return -1;

	return hash[index]->getValue();
}