# [Comments in C](https://www.javatpoint.com/comments-in-c)

Comments in C language are used to provide information about lines of code. It is widely used for documenting code. There are 2 types of comments in the C language.

1. Single Line Comments
2. Multi-Line Comments

## Single Line Comments

Single line comments are represented by double slash \\. Let's see an example of a single line comment in C.

```c
#include<stdio.h>    

int main()
{    
  //printing information    
  printf("Hello C");    
  return 0;  
}
```

Output:

```c
Hello C
```

Even you can place the comment after the statement. For example:

```c
printf("Hello C");//printing information
```

## Multi Line Comments

Multi-Line comments are represented by slash asterisk \\_ ... \\_. It can occupy many lines of code, but it can't be nested. Syntax:

```c
\*
code
to be commented
*/
```

Let's see an example of a multi-Line comment in C.

```c
#include<stdio.h>
int main(){
/\*printing information
Multi-Line Comment\*/
printf("Hello C");
return 0;
}
```

Output:

```
Hello C
```
