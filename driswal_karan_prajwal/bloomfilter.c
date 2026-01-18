#include <stdio.h>
#include <string.h>

#define BLOOM_SIZE 1000

int bloom[BLOOM_SIZE];

int hash1(const char *s){
    int h = 0;
    while (*s) {
        h += *s;
        s++;
    }
    return h % BLOOM_SIZE;
}

int hash2(const char *s){
    int h = 0;
    int i = 1;
    while (*s) {
        h += (*s * i);
        s++;
        i++;
    }
    return h % BLOOM_SIZE;
}

int hash3(const char *s){
    int h = 0;
    while (*s) {
        h += (*s % 10);
        s++;
    }
    return h % BLOOM_SIZE;
}

void bloom_add(const char *item){
    bloom[hash1(item)] = 1;
    bloom[hash2(item)] = 1;
    bloom[hash3(item)] = 1;
}

int bloom_contains(const char *item){
    return bloom[hash1(item)] && bloom[hash2(item)] && bloom[hash3(item)];
}

int main(){
    char key[20];
    int false_negatives = 0;
    int false_positives = 0;

    memset(bloom, 0, sizeof(bloom));

    for (int i = 0; i < 100; i++) {
        sprintf(key, "item%d", i);
        bloom_add(key);
    }

    for (int i = 0; i < 100; i++) {
        sprintf(key, "item%d", i);
        if (!bloom_contains(key))
            false_negatives++;
    }

    for (int i = 100; i < 200; i++) {
        sprintf(key, "item%d", i);
        if (bloom_contains(key))
            false_positives++;
    }

    printf("False negatives: %d\n", false_negatives);
    printf("False positives: %d\n", false_positives);

    return 0;

}
