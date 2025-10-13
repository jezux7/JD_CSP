// JD 7th Family

#include <stdio.h>

int main (void){
    char familys[][20] = {"Mom", "Cate", "Lulu", "Vicky", "Kaiser"};

for(int i = 0; i < 5; i++){
        printf("Hello, %s\n", familys[i]);
    }

    return 0;
}