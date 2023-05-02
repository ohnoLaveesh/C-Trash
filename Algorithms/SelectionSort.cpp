#include <iostream>

void print(int arr[]) {
    int i , num = sizeof(arr);
    for (i = 0; i < 4; i++) {
        printf("%d->", arr[i]);
    }
    printf("%d", arr[i]);
}

int main() {

    int arrSize=0, i=0, j=0;
    int arr[] = { 30,20,50,10,40 };

     for(auto i: arr){      //Loop to count array size
         arrSize++;
     }

    for (i = 0; i < arrSize; i++) {
        int smallest = i;

        // Searching Smallest element in unsorted array
        for (j = i + 1; j < arrSize; j++) {
            if (arr[smallest] > arr[j]) {
                smallest = j;
            }
        }

        // Swaping the smallest element to leftmost element of Unsorted array
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }

    //Calling print funtion by passing SORTED array
    print(arr);

    return 0;
}