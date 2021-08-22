# Variables

### A **variable** is a name of the memory location. It is used to store data, its value can be changed\* and reused many times. it is a way to represent memory location through symbol so that it can be easily identified.

_\* only non constant variables' value can be change multiple times._

---

## Uses of variables:

1. If you have to use some value repeatedly, you can use variables instead.
2. Variables are used to store data.
3. You can store data of multiple types (char, int, float, double, etc...).
4. Save the value once and use it as many times as per your wish!
5. Modify 'em whenever you want*. (*constants cannot be modified)

Types of variables:

1. Constant variables. (value(s) once specified can't be changed in future)
2. Non-constant variables. (value(s) can be change multiple times)

## Syntax

```c
type identifier value;
```

Example:

```c
int a;
float b;
char c;
```

Here, a, b and c are variables and the `int`, `float` and `char` are the datatypes.

We can also provide values while declaring the variables

```c
// Declaring 2 variables of the same type can formatted to use only one line of code and reduce boilerplate code.
int a = 10, b = 20;

float f = 20.8;

char c = 'A';
```

## Rules for defining variables

- A variable identifier can contain alphabets, digits and underscores.
- A variable identifier can start with a alphabet and/or underscore only, and it must not start with a digit.
- Whitespaces are not allowed in the identifier, use `snake case` or `camel case` instead.
- Reserved keywords **cannot** be used as variable identifiers.

### <span style="color:green;">Valid</span> variable identifiers:

```c
int a;
int _ab;
int a30
char *userName;
char *user_password;
```

### <span style="color:red;">Invalid</span> variables identifiers:

```c
int a;
int a b;
int long;
```

## Types of Variables in **C**

There are many types of variables in C:

1. Local variable.
2. Global variable.
3. Static variable.
4. Automatic variable.
5. External variable.

### Local Variables

A variable that is declared inside the function or block is called a local variable. These variables can **only** be used in the defined **block scope**.

It must be declared at the start of the block.

Example:

```c

int a = 1; // This is not a local variable
void function1()
{
    int x = 10; // This is a valid local variable, and will only be available to use in this function.
}
// First of all you cannot refer variable x outside the function
int y = x; // This also is not a valid local variable.
// ^^^^^^ this will throw an error while compiling.
```

> You **must** initialize the local variable before using it.

### Global variable

A variable that is declared outside the function or block is called a global variable. Any function can change the value of the global variable. It is available to all the functions.

And it must be declared at the start of the block.

```c
int a = 20; // Global variable

void foo()
{
    int x = value; // Local variable

    // The value of a can be accessed in this function and will not throw any error while compiling.
}
```

### Static Variable

A variable that is declared with the static keyword is called a static variable.

It retains its value between multiple function calls.

```c
void foo()
{
    int x = 10; // Local variable
    static int y = 11; // Static variable
    x = x + 1;
    y = y + 1;

    printf("%d, %d", x, y);

    return;
}
```

If you can this function many times, the local variable will print the same value for each function call, i.e 11, 11, 11 and so on. But the static variable will print the incremented value in each function call, i.e 12, 13, 14.

### External variable

We can share a variable in multiple C source files by using an external variable. To declare an external variable you need to use `extern` keyword.

> **Example**  
> _file_a.h_
>
> ```c
> extern int x = 10; // External variable ( global too )
> ```
>
> _file_b.c_
>
> ```c
> #include "file_a.h"
> #include <stdio.h>
> void printValue()
> {
>  printf("Global variable: %d", x)
> }
> ```

## Constants

> Syntax
>
> ```c
>   const datatype IDENTIFIER;
> ```

### Types of Constants:

Constants can be categorized into 2 types, which are:

1. Primary constants.

- Eg. `integer`, `float` and `char`

2. Secondary constants.

- Eg. array, structure, pointers, enum, etc.

> Example for Primary constants
>
> ```c
> #include <stdio.h>
>
> int main()
> {
>     const int height = 20;
>     const int base = 40;
>     float area = 0.5 * height * base;
>
>     printf("Area of triangle is %f", area);
>
>     return 0;
> }
> ```
>
> Output:
>
> ```
> Area of triangle is 400.000000
> ```
>
> ---
>
> Example for secondary constants:
>
> ```c
> #include "stdio.h"
>
> void main()
> {
>    int a;
>    int *p;
>    a=10;
>    p=&a;
>
>    printf("a=%d\n",a); // 10
>
>    printf("p=%d\n",p); // address value of p
>
>    *p=12;
>
>    printf("a=%d\n",a); // 12
>
>    printf("p=%d\n",p); // address value of p
> }
> ```
>
> Output:
>
> ```text
> a=10
> p=6422036
> a=12
> p=6422036
> ```


### Notes are available [here](https://www.javatpoint.com/variables-in-c)