# 0x0F. C - Function pointers

# Tasks

## Task 0: What's My Name

Write a function that prints a name.

- Prototype: `void print_name(char *name, void (*f)(char *));`

## Task 1: If You Spend Too Much Time Thinking About a Thing, You'll Never Get It Done

Write a function that executes a function given as a parameter on each element of an array.

- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

- Parameters:
  - `array`: An array of integers.
  - `size`: The size of the array.
  - `action`: A pointer to the function to be executed on each array element.

## Task 2: To Hell with Circumstances; I Create Opportunities

Write a function that searches for an integer.

- Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

- Parameters:
  - `array`: An array of integers.
  - `size`: The number of elements in the array.
  - `cmp`: A pointer to the function used to compare values.

- Return Value:
  - The index of the first element for which the `cmp` function does not return 0.
  - Returns `-1` if no element matches or if `size <= 0`.

## Task 3: A Goal Is Not Always Meant to Be Reached, It Often Serves Simply as Something to Aim At

Write a program that performs simple operations.

- Usage: `calc num1 operator num2`

- Parameters:
  - `num1` and `num2`: Integers (use `atoi` to convert from string).
  - `operator`: One of `+`, `-`, `*`, `/`, `%`.

- Output:
  - Prints the result of the operation followed by a new line.

- Error Handling:
  - Print `Error` and exit with status `98` if the number of arguments is incorrect.
  - Print `Error` and exit with status `99` if the operator is invalid.
  - Print `Error` and exit with status `100` if division or modulo by zero is attempted.

### File Structure

1. **3-calc.h**: Contains all function prototypes and data structures used by the program.

2. **3-op_functions.c**: Contains the following functions:
   - `int op_add(int a, int b);` - Returns the sum of `a` and `b`.
   - `int op_sub(int a, int b);` - Returns the difference of `a` and `b`.
   - `int op_mul(int a, int b);` - Returns the product of `a` and `b`.
   - `int op_div(int a, int b);` - Returns the division of `a` by `b`.
   - `int op_mod(int a, int b);` - Returns the remainder of the division of `a` by `b`.

3. **3-get_op_func.c**: Contains the function:
   - `int (*get_op_func(char *s))(int, int);` - Selects the correct function for the given operator.

4. **3-main.c**: Contains the `main` function only.

## Task 4: Most Hackers Are Young Because Young People Tend to Be Adaptable

Write a program that prints the opcodes of its own main function.

- Usage: `./main number_of_bytes`

- Output Format:
  - Opcodes printed in hexadecimal, lowercase.
  - Each opcode is two characters long.
  - Listing ends with a new line.

- Error Handling:
  - Print `Error` and exit with status `1` if the number of arguments is incorrect.
  - Print `Error` and exit with status `2` if the number of bytes is negative.

- Notes:
  - Use `printf` for output.
  - Use `atoi` to convert the argument to an integer.

