// Task 2: Understanding Heap Memory
// Allocate an integer dynamically using new inside a function.
// Print its address and value.
// Call the function multiple times.

    
#include <iostream>
void heapMemoryExample() {
    int* x = new int(20);
    std::cout << "Heap variable address: " << x << std::endl;
    delete x;  // Avoid memory leak
}
int main() {
    heapMemoryExample();
    heapMemoryExample();
    return 0;
}
