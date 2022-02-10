#include <stdio.h>

int array[1001];
int main() {
    int number, i, j, min, index, temp;
    printf("데이터갯수 입력하세요 ");
    scanf("%d", &number);
    printf("데이터를 입력하세요\n");
    for (i = 0; i < number; i++) {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < number; i++) {
        min = 1001;
        for (j = i; j < number; j++) {
            if ( min > array[j] ) {
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    for (i = 0; i < number; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}