#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

// Define a structure for key-value pairs
struct KeyValue {
    char *key;
    char *value;
    struct KeyValue *next; // Pointer to the next key-value pair in the linked list
};

// Define the hash table structure
struct HashTable {
    struct KeyValue *table[TABLE_SIZE];
};

// Hash function
int hash(const char *key) {
    int hash_value = 0;
    for (int i = 0; key[i] != '\0'; ++i) {
        hash_value += key[i];
    }
    return hash_value % TABLE_SIZE;
}

// Initialize the hash table
void initializeHashTable(struct HashTable *hashTable) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        hashTable->table[i] = NULL;
    }
}

// Insert a key-value pair into the hash table
void insert(struct HashTable *hashTable, const char *key, const char *value) {
    int index = hash(key);

    // Create a new key-value pair
    struct KeyValue *newPair = (struct KeyValue *)malloc(sizeof(struct KeyValue));
    newPair->key = strdup(key);
    newPair->value = strdup(value);
    newPair->next = NULL;

    // Check if the index is empty
    if (hashTable->table[index] == NULL) {
        hashTable->table[index] = newPair;
    } else {
        // Handle collisions by adding to the linked list at the index
        struct KeyValue *current = hashTable->table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newPair;
    }
}

// Search for a key in the hash table
const char *search(struct HashTable *hashTable, const char *key) {
    int index = hash(key);

    // Traverse the linked list at the index
    struct KeyValue *current = hashTable->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    return NULL; // Key not found
}

// Clean up the hash table
void cleanupHashTable(struct HashTable *hashTable) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        struct KeyValue *current = hashTable->table[i];
        while (current != NULL) {
            struct KeyValue *temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
}

int main() {
    struct HashTable hashTable;
    initializeHashTable(&hashTable);

    insert(&hashTable, "apple", "fruit");
    insert(&hashTable, "banana", "fruit");
    insert(&hashTable, "carrot", "vegetable");

    const char *result = search(&hashTable, "carrot");
    if (result != NULL) {
        printf("Value for key 'apple': %s\n", result);
    } else {
        printf("Key 'apple' not found.\n");
    }

    cleanupHashTable(&hashTable);

    return 0;
}
