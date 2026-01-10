#include <stdio.h>

int main() {
	// your code goes here
    int size = 20;
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        count = count + 1;
        printf("%.4lf   ", 10.55555);
        if (count == 4) {
            printf("\n");
            count = 0;
        } 
        //printf("Элемент %d: %d\n", i, numbers[i]); - закомментированная строка
    }
}

