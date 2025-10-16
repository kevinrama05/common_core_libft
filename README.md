*This project has been created as part of the 42 curriculum by <kerama>*

## **Description**

This is Libft, the very first created library, which includes essential functions from
the C standard library, like string.h, stdlib.h and unistd.h, from scratch. Additionally,
I have implemented custom utility functions, and explored linked list manipulation.

I recreated 43 functions, which 23 functions are essential functions, recreated from the
C standard library, 11 functions are custom utility functions, and 9 functions are created
to deal with linked lists, like creating a linked list, adding to the front, adding to the
back, deleting one node, deleting the whole linked list, and so on.

The goal of this project is to understand how some essential functions work, and develop our
own reusable library, which I will be able to use it in the next projects. I am also able to
update the library, add new functions, or optimize them, if nedded.

## **Instructions**

**1. Clone the repository**
```bash
git clone git@github.com:42learners/Common-Core---Libft-0170423f-c22d-4ffd-be76-703c7d46e890.git libft
cd libft
```
<br><br>
**2. Compile the library**
```bash
make
```
This will create a static library file called **libft.a**
```bash
libft.a
```
<br><br>
**3. Use the library in other projects**
```c
#include "libft.h"
```
```bash
cc main.c libft.a -o program
```
Them you can run the program
```bash
./program
```
<br><br>
Additionally, you can use other make commands
```bash
make clean     # Remove object files (.o)
make fclean    # Remove object files and libft.a
make re        # Recompile everything from scratch
```

## **Resources**
### **Documentation**
C Library Reference (cplusplus.com) -> For understanding the behaviour of standard C functions reimplemented in C.
GNU C Library Manual (glibc) -> Official documentation for the C standard library
man7.org -> Linux manual pages for functions like malloc, write and free


### **Tutorials & Articles**
GeeksforGeeks -> Strings in C
GeeksforGeeks -> Dynamic Memory Allocation in C
GeeksforGeeks -> Singly Linked Lists in C

### Use of AI in this project
AI (ChatGPT, model GPT-5) was used as a learning and support tool during the development of this project.
Specifically, it assisted in:

- Clarifying C concepts such as memory management, pointers, and library compilation.
- Explaining errors and debugging strategies encountered while building the library.
- Writing documentation — including README structure, Markdown formatting, and clean project descriptions.
- Improving code readability and comments, while ensuring compliance with Norminette rules.
