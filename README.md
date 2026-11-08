*This project has been created as part of the 42 curriculum by mahadout.*

# Libft

## Description

**Libft** is a project from the 42 curriculum that involves creating a personal C library by reimplementing several standard C library functions and developing additional utility functions.

The main goal of this project is to deepen my understanding of the C programming language, memory management, pointers, strings, and data structures. It also introduces the process of creating a static library that can be reused in future C projects.

The library is named `libft.a` and contains custom implementations of commonly used functions, allowing them to be linked into other C programs.

### Project objectives

- Understand how standard C library functions work.
- Improve proficiency with pointers, arrays, strings, and memory addresses.
- Practice dynamic memory allocation using `malloc` and `free`.
- Learn to manipulate memory safely and efficiently.
- Understand linked lists and basic data structures.
- Learn how to create and manage a static library using a Makefile.
- Follow the 42 Norm coding standard and compile without warnings.

## Library contents

The library is organized into several categories of functions.

### 1. Character checks and conversions

These functions check character properties or convert character case.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. String functions

These functions measure, search, compare, and manipulate strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies a string into a destination buffer with a size limit. |
| `ft_strlcat` | Appends a string to a destination buffer with a size limit. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string, limited by a length. |
| `ft_strdup` | Allocates and returns a duplicate of a string. |
| `ft_substr` | Extracts a substring into newly allocated memory. |
| `ft_strjoin` | Concatenates two strings into newly allocated memory. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string by index. |

### 3. Memory functions

These functions manipulate memory blocks independently of string termination.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specified byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory areas. |
| `ft_memmove` | Copies bytes while safely handling overlapping memory areas. |
| `ft_memchr` | Searches for a byte within a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |

### 4. Conversion and output functions

These functions convert values or write characters, strings, and numbers to a file descriptor.

| Function | Description |
|---|---|
| `ft_atoi` | Converts the initial portion of a string to an integer. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### 5. Linked list functions (bonus)

The bonus part introduces singly linked lists using the `t_list` structure.

Each node contains a pointer to its content and a pointer to the next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new linked list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node using a content deletion function. |
| `ft_lstclear` | Deletes an entire list and its contents. |
| `ft_lstiter` | Applies a function to each node's content. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

*Note: The bonus functions should only be listed as implemented if the bonus part has actually been completed.*

## Instructions

### Requirements

- A C compiler, such as `cc` or `gcc`.
- The `make` utility.
- A Unix-like environment, such as Linux or macOS.
- The standard C library and development tools.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone https://github.com/ahadout/42-Libft.git
cd Libft
```

Compile the library using:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Makefile commands

| Command | Description |
|---|---|
| `make` or `make all` | Compiles the source files and creates `libft.a`. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the generated library. |
| `make re` | Rebuilds the library from scratch. |

### Using the library

To use Libft in another C project, include the header file and link the static library during compilation.

Example source file:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, 42!";

    printf("Length: %zu\n", ft_strlen(str));
    return (0);
}
```

Compile the program from the directory containing `libft.h` and `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

Expected output:

```text
Length: 10
```

## Technical choices

- **Language:** C.
- **Library format:** Static library (`libft.a`).
- **Header:** `libft.h`, containing function prototypes and required declarations.
- **Build system:** Makefile.
- **Compiler flags:** `-Wall -Wextra -Werror`.
- **Memory management:** Dynamically allocated memory is managed explicitly using `malloc` and `free`.
- **Coding standard:** The 42 Norm.

The functions are implemented to reproduce the expected behavior of their corresponding standard library functions where required by the project subject.

## Resources

The following resources are useful for understanding C, memory management, string manipulation, compilation, and static libraries.

### Documentation

- [C reference — cppreference](https://en.cppreference.com/w/c)
- [Linux manual pages](https://man7.org/linux/man-pages/)
- [GNU Compiler Collection documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)

### Learning resources

- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [Learn C — Learn-C.org](https://www.learn-c.org/)
- The 42 Libft project subject and the applicable 42 coding standards.

### AI usage

AI tools, were used as supplementary learning resources during the development of this project.

Their use included:

- Explaining C concepts such as pointers, strings, null terminators, and memory allocation.
- Clarifying the expected behavior of standard library functions.
- Helping analyze compilation errors, warnings, and failing tests.
- Reviewing implementation logic and identifying potential edge cases.

## Author

- **author:** ahadout
- **Project:** Libft
- **School:** 1337 / 42 Network
