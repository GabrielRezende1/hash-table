#include <stdio.h>

#include "hash_table.c"

int main(void)
{
    ht_hash_table *ht = ht_new();

    printf("Inserting values...\n");
    ht_insert(ht, "apple", "A red fruit");
    ht_insert(ht, "banana", "A yellow fruit");
    ht_insert(ht, "cherry", "A red fruit");

    const char *keys[] = {"apple", "banana", "cherry"};

    printf("Printing values...\n");
    for (int i = 0; i < 3; i++)
    {
        char *value = ht_search(ht, keys[i]);
        printf("%s: %s\n", keys[i], value);
    }

    printf("Deleting values...\n");
    ht_del_hash_table(ht);
    printf("Done.\n");
    return 0;
}