# Escape Sequence in C

An escape sequence in C language is a sequence of characters that doesn't represent itself when used inside string literal or character.

It is composed of two or more characters starting with backslash \. For example: \n represents new line.

## List of Escape Sequences in C

| Escape Sequence | Meaning            |
| --------------- | ------------------ |
| \a              | Alarm or Beep      |
| \b              | Backspace          |
| \f              | Form Feed          |
| \n              | New Line           |
| \r              | Carriage Return    |
| \t              | Tab (Horizontal)   |
| \v              | Vertical Tab       |
| \\\             | Backslash          |
| \\'             | Single Quote       |
| \\"             | Double Quote       |
| \\?             | Question Mark      |
| \nnn            | octal number       |
| \xhh            | hexadecimal number |
| \0              | Null               |

## Escape Sequence Example

```c
#include<stdio.h>

int main()
{
     int number=50;
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language\"");
    return 0;
}
```

Output
```
You
are
learning
'c' language
"Do you know C language"
```