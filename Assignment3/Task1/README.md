## Task 1

**1. Explain the difference between a normal variable and a pointer. Your answer should clearly mention: what each one stores, how memory is accessed, how values are read and modified.**

A **normal variable** directly stores a value in memory. It holds the actual data (e.g., an integer, character, or string), and the compiler automatically manages its memory location. To access the value, you reference the variable by name, and to modify it, you assign a new value directly.

A **pointer** stores a memory address instead of a value. It holds the location of another variable in memory. Memory is accessed indirectly through dereferencing the pointer (using the `*` operator). To read a value, you dereference the pointer to access what it points to. To modify the value, you dereference the pointer and then assign a new value to the dereferenced address.

**Key differences:**
- **Storage:** Variables store data; pointers store addresses
- **Memory access:** Variables access data directly; pointers access data indirectly
- **Reading values:** Variables use the variable name; pointers use the dereference operator (`*`)
- **Modifying values:** Variables use direct assignment; pointers use dereferenced assignment (`*pointer = newValue`)
**2. Using suitable examples, explain how variable declaration and definition differs from pointer declaration and definition. Clearly highlight the role of the operators * and &**

Variable declaration creates storage space and optionally assigns a value while pointer declaration creates storage for an address that points to another value

```c
#include <stdio.h>

int main() {
    // ===== VARIABLE DECLARATION & DEFINITION =====
    int age;          //declaration    
    age = 25;         //definition     
    
    // ===== POINTER DECLARATION & DEFINITION =====
    int *ptr;             // declaration
    ptr = &age;           // definition   
    
    
    
    printf("Variable 'age':\n");
    printf("  Value: %d\n", age);
    printf("  Address: %p\n\", &age);
    
    printf("Pointer 'ptr':\n");
    printf("  Stores address: %p\n", (void*)ptr);
    printf("  Points to value: %d\n\n", *ptr);
    
    return 0;
}
```


**3. Explain the meaning of dereferencing a pointer. Using a simple example, show how a pointer accesses the value stored at a memory address, and demonstrate how a value can be modified using dereferencing.**

Dereferencing a pointer means accessing the value that the pointer points to in memory. This is done using the dereference operator (`*`). 

For example, consider the following code snippet:

```c
int main() {
    int value = 99;       //declaring the variable
    int *pointer = &value; // this pointer points to the address of the variable

    //  dereferencing the value of 99
    printf("Value before modification: %d\n", *pointer); // Outputs: 10

    //modified
    *pointer = 67; 

    printf("Value after change: %d\n", value); 
    return 0;
}
```

**4. Describe scenarios or use cases where pointers are preferred over normal variables. Support your answer with at least two practical examples.**

Pointers are preferred in several scenarios:

1. Dynamic Memory Allocation: When the size of data is unknown at compile time, pointers allow allocation of memory at runtime

2. Function Parameters (Pass-by-Reference): Pointers enable passing variables by reference, allowing functions to modify the original variable. 

3. Returning Multiple Values: Functions can use pointers as output parameters to return multiple values. For example, a function can populate multiple variables through pointer parameters.

4. Resource Efficiency: Pointers reduce memory usage by storing addresses instead of copying huge data structures when passing them between functions.


**5. Explain the limitations and risks associated with using pointers compared to variables. .**

1. Null Pointer Dereferencing: Dereferencing a null or uninitialized pointer causes crashes or undefined behavior.

2. Memory Leaks: Dynamically allocated memory that isn't freed can accumulate and exhaust system resources.

3. Dangling Pointers: A dangling pointer is a pointer that is referencing freed memory. dangling pointers lead to unpredictable behavior when dereferenced.

5. Complexity: Pointers increase code complexity, making programs harder to understand and debug.

6. Security Vulnerabilities: Improper pointer usage is a common source of security issues.


dangling pointer:
```c
int *ptr = malloc(sizeof(int));
free(ptr);
*ptr = 5;  // Undefined behavior - ptr is dangling
```

**5. Using suitable examples compare call by value and call by reference. Explain how data is passed to functions in each case.**

Call by Value:
In call by value, a copy of the variable's value is passed to the function. The function receives a copy of the data, so any modifications made inside the function do not affect the original variable.

Example:
```c
void increase(int num) {
    num++; // modifies the copy, not the original
}

int main() {
    int value = 5;
    increase(value);
    printf("%d\n", value);
    return 0;
}
```

Call by Reference:
In call by reference, a pointer to the variable's memory address is passed to the function. The function can  access and modify the original variable.

Example:
```c
void increment(int *num) {
    (*num)++; // modifies the original variable
}

int main() {
    int value = 5;
    increment(&value);
    printf("%d\n", value);// (changed output to 6)
    return 0;
}
```

Differences:
1. Data passed: Call by value passes a copy; call by reference passes an address
2. Original variable: Call by value leaves it unchanged; call by reference allows modifications
3. Memory efficiency: Call by value uses more memory for large data; call by reference uses less
4. Use case: Call by value for small, independent values; call by reference when functions need to modify original data

**6. Discuss practical scenarios where:**

*a. Call by value is preferred.*

when:
- Working with small data types like integers, characters and floats where copying is efficient
- The function should not modify the original variable
- You want to protect the original data from unintended changes

Example: A function that calculates the square of a number doesn't need to modify the original value, so call by value is appropriate.

*b. Call by reference is preferred.*

Call by reference is preferred when:
- Working with large data structures  where copying is memory-intensive
- The function needs to modify the original variable
- Returning multiple values from a function through output parameters
- Improving performance by avoiding unnecessary data duplication

Example: A function that swaps two variables or updates a large array should use call by reference to modify the originals efficiently.








