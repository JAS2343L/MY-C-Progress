#include <stdio.h>


int main() {
    int nom;

    printf("ENTER NumbEr: ");
    scanf("%d", &nom);

    if(nom < 0) {
        printf("NEGATIVE\n");
    }
    else if(nom == 0) {
        printf("ZERO\n");
    } 
    else {
        printf("POSITIVE\n");
    }
    return 0;
}