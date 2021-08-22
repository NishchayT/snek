# Datatypes

## Strings

**Char** _can be called as a single character or char_ : Single Character. ('A')

Example:

```c
char initial = 'A'; // Uses 1 byte
```

**Char\*** \_can be also called as char array: A array of characters. ("Hello!")

Example:

```c
char *userName = "John Doe";
```

---

## Integers

**Int** : Whole numbers

Usage:

```c
int age = 12; // Whole numbers only!, uses 2-4 bytes depending on the architecture
unsigned int timeRequired = 387; // uses 4 bytes, cannot be negative.
short int index = 10; // Uses - bytes
long int secondsInYear = 31536000; // Uses - bytes
```

**Double** : Used to store precision decimal numbers (eg account balance).

Usage:

```c
double bal = 28823.98; // uses 8 bytes, up-to 15 decimal precision
// OR
long double randomId = 239.9872239853220571850 // uses 12 bytes, upt-o 19 decimal places precision
```

**Float** : Used to store decimal numbers which you or your customers won't mind if they get rounded to some closer decimal number. (eg download percent)

Usage:

```c
float downloadedBytes = 1215.5; // Users 4 bytes, up-to 6 decimal places precision
```

**Short** : When you know that the value of your integer won't be a huge number, you can use `short`.

Usage:

```c
short rollNo = 46; // uses 2 bytes
```

**Long** : If your integer is gonna be a huge integer you should use `long` datatype instead of `int`

Example:

```c
long uid = 23498234239642938472; // uses 4 bytes
```

---

# Modifiers

**Arrays** : _Adding `[]` next to the variable identifier will make it a x array variable (x can be any datatype.)_

Example:

```c
  // I am a character, I'm not powerful enough to store more than one character ):
  char a = 'A';
  // I am a char array and I have the power to store multiple characters in me.
  char b[] = "Abc";
```

**Unsigned** : When you already know that your variable value cannot be a minus number you can use the unsigned keyword before the normal syntax.

Example:

```c
unsigned short rollNo: 56;
```

Notes:

## Calculating a `int` variable with `float` or `double` variable will output a variable with the `float` or `double` datatype.

_More notes are available [here](https://www.javatpoint.com/data-types-in-c)_
