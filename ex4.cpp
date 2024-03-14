#include <iostream>

// Function using references
void multiplyByReference(int& a, int& b) {
    int result = a * b;
    std::cout << "Result using references: " << result << std::endl;
}

// Function using pointers
void multiplyByPointer(int* a, int* b) {
    int result = (*a) * (*b);
    std::cout << "Result using pointers: " << result << std::endl;
}

// Struct to hold values
struct Values {
    int a;
    int b;
};

// Function using struct
void multiplyByStruct(Values values) {
    int result = values.a * values.b;
    std::cout << "Result using struct: " << result << std::endl;
}

int main() {
    int a = 5, b = 6;

    // Call functions with different parameter types
    multiplyByReference(a, b);
    multiplyByPointer(&a, &b);
    Values values = {a, b};
    multiplyByStruct(values);

    return 0;
}
