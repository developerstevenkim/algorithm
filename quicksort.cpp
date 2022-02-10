#include <stdio.h>

int number = 10;
int data[10] = {11, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end) {
    if (start >= end) { // in case of # of elements is 1
        return;
    }
    int key = start; // fivot value is the first one
    int i = start + 1;
    int j = end;
    int temp;

    while (i <= j) { // until cross
        while (data[i] <= data[key]) {
            i++; // 이해안됨.. 첫번째 피벗값이 더 클때..?
        }
        while (data[j] >= data[key] && j > start) {
            j--;
        }
        if (i > j) { // 엇갈린상태면 키값과 교체
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        } else {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
    
}

int main() {
    quickSort(data, 0, number - 1);
    for (int i = 0; i < number; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}