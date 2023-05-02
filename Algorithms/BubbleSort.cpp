#include <iostream>

void print(int arr[]) {
    int i, num = sizeof(arr);
    for (i = 0; i < 4; i++) {
        printf("%d->", arr[i]);
    }
    printf("%d", arr[i]);
}

int main() {

    int arr[5] = { 30,10,50,20,40};
    int i, j;
    int z = 0;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5-1; j++) {

            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
    print(arr);

    return 0;
}