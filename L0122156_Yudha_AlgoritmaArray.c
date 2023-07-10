#include <stdio.h>
#define ARRAY_SIZE 8

void hashing(int numArray[ARRAY_SIZE]);

int numArray[ARRAY_SIZE] = {
    10, 5, 4, 9, 120, 4, 6, 10
};

int main(){
    printf("Remedial Kuis SDA\n\n");
    printf("Nama\t: Yudha Cahya Wijaya\n");
    printf("NIM\t: L0122156\n");
    printf("Tujuan\t: Mencari angka pertama yang pertama kali berulang di dalam array.\n\n");
    printf("Menggunakan hash table\n");
    printf("----------------------\n");
    printf("Array : ");
    for(int i = 0; i < ARRAY_SIZE; i++){
        printf("%d ", numArray[i]);
    }
    hashing(numArray);

    puts("\n");
}

void hashing(int numArray[ARRAY_SIZE]){
    int hashTable[ARRAY_SIZE] = {};

    int min = -1;
    int indexHash = ARRAY_SIZE;

    for (int j = 0; j < ARRAY_SIZE; j++){
        hashTable[j] = numArray[indexHash - 1];
        for(int i = ARRAY_SIZE - 1; i >= 0; i--){
            if(hashTable[j] == numArray[i] && i != ARRAY_SIZE-j-1){
                min = i;
            }
        }
        indexHash -= 1;
    }

    if (min != -1){
        printf("\nAngka berulang: %d", numArray[min]);
    }
    else{
        printf("\nTidak ada angka yang berulang.");
    }
}

