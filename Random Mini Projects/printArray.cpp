#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr, size_t index) {
    if (index < arr.size()) {
        std::cout << arr[index] << " ";
        printArray(arr, index + 1);
    }
}

int main() {
    std::vector<int> myArray = {1, 2, 3, 4, 5};
    printArray(myArray, 0);
    return 0;
}
