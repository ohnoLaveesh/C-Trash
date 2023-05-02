#include <iostream>

int main() {

    int n;
    int i;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    int* ptr = (int*)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
        std::cin >> ptr[i];
    }

    for (i = 0; i < n-1; i++) {
        std::cout << ptr[i] << "->";
    }
    std::cout << ptr[i];

}