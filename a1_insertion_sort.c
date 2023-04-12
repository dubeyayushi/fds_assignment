#include<stdio.h>

void insertionSort(int *input, int size){
    for (int i = 1; i<size; i++){
        int current = input[i];
        int j;
        for (j = i-1; j>=0; j--){
            if (current<input[j]){
                input[j+1] = input[j];
            }
            else{
                break;
            }
        }
        input[j+1] = current;
    }
}

int main(){
    int input[5] = {3,2,5,4,1};
    insertionSort(input, 5);
    for(int i = 0; i<5; i++){
        printf("%d ", input[i]);
    }
}
