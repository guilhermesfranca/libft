	*This project has been created as part of the 42 curriculum by gfranca.*

	# libft

	## Description

	libft is a custom static C library developed during the 42 Porto curriculum.  
	The purpose of this project is to rebuild a set of standard C library functions from scratch in order to better understand low-level programming concepts such as memory management, pointer manipulation, strings, and data structures.

	In addition to recreating several libc functions, the library also includes utility functions frequently used throughout the 42 cursus, as well as a complete set of singly linked list operations.

	The project is divided into three main parts:

	- Reimplementation of standard libc functions
	- Additional utility functions for string and memory handling
	- Linked list manipulation functions using the `t_list` structure

	---

	## Features

	- Custom implementations of standard C library functions
	- Utility functions for string processing and memory manipulation
	- Singly linked list management
	- Modular and reusable code
	- Static library generation with Makefile
	- Norminette compliant

	---

	## Instructions

	### Compilation

	Clone the repository and compile the library using the Makefile:

	```bash
	make
	````

	This command generates the `libft.a` static library at the root of the project.

	---

	### Available Makefile Rules

	| Rule                 | Description                                   |
	| -------------------- | --------------------------------------------- |
	| `make` or `make all` | Compile mandatory source files into `libft.a` |
	| `make clean`         | Remove object files                           |
	| `make fclean`        | Remove object files and `libft.a`             |
	| `make re`            | Recompile the entire project                  |

	---

	### Using libft in another project

	Compile your program by linking the library:

	```bash
	cc main.c -L. -lft -I. -o program
	```

	Make sure that both `libft.a` and `libft.h` are accessible from your project path.

	---

	## Project Structure

	```text
	libft/
	├── Makefile
	├── libft.h
	├── ft_*.c
	├── ft_*.h
	├── obj/
	└── README.md
	```

	---

	# Library Overview

	## Part 1 — Libc Functions

	These functions reproduce the behaviour of standard C library functions while keeping the same prototypes and semantics, all prefixed with `ft_`.

	| Function     | Description                                      |
	| ------------ | ------------------------------------------------ |
	| `ft_isalpha` | Checks if a character is alphabetic              |
	| `ft_isdigit` | Checks if a character is numeric                 |
	| `ft_isalnum` | Checks if a character is alphanumeric            |
	| `ft_isascii` | Checks if a character belongs to the ASCII table |
	| `ft_isprint` | Checks if a character is printable               |
	| `ft_toupper` | Converts lowercase letters to uppercase          |
	| `ft_tolower` | Converts uppercase letters to lowercase          |
	| `ft_strlen`  | Returns the length of a string                   |
	| `ft_strlcpy` | Safely copies a string into a buffer             |
	| `ft_strlcat` | Safely concatenates strings                      |
	| `ft_strchr`  | Finds the first occurrence of a character        |
	| `ft_strrchr` | Finds the last occurrence of a character         |
	| `ft_strncmp` | Compares two strings up to `n` bytes             |
	| `ft_strnstr` | Searches for a substring within a size limit     |
	| `ft_strdup`  | Duplicates a string using dynamic allocation     |
	| `ft_memset`  | Fills memory with a constant byte                |
	| `ft_bzero`   | Sets memory bytes to zero                        |
	| `ft_memcpy`  | Copies memory areas without overlap handling     |
	| `ft_memmove` | Copies memory areas safely with overlap handling |
	| `ft_memchr`  | Searches memory for a specific byte              |
	| `ft_memcmp`  | Compares two memory regions                      |
	| `ft_atoi`    | Converts a string to an integer                  |
	| `ft_calloc`  | Allocates and zero-initializes memory            |

	---

	## Part 2 — Additional Functions

	Extra utility functions designed to simplify common programming tasks.

	| Function        | Description                                            |
	| --------------- | ------------------------------------------------------ |
	| `ft_substr`     | Extracts a substring from a string                     |
	| `ft_strjoin`    | Concatenates two strings into a new allocation         |
	| `ft_strtrim`    | Removes characters from both ends of a string          |
	| `ft_split`      | Splits a string using a delimiter                      |
	| `ft_itoa`       | Converts an integer into a string                      |
	| `ft_strmapi`    | Applies a function to each character of a string       |
	| `ft_striteri`   | Iterates through a string applying a function in-place |
	| `ft_putchar_fd` | Writes a character to a file descriptor                |
	| `ft_putstr_fd`  | Writes a string to a file descriptor                   |
	| `ft_putendl_fd` | Writes a string followed by a newline                  |
	| `ft_putnbr_fd`  | Writes an integer to a file descriptor                 |

	---

	## Part 3 — Linked List Functions

	The project also includes a complete set of functions to manipulate singly linked lists using the following structure:

	```c
	typedef struct s_list
	{
		void			*content;
		struct s_list	*next;
	}	t_list;
	```

	### Linked List Operations

	| Function          | Description                                            |
	| ----------------- | ------------------------------------------------------ |
	| `ft_lstnew`       | Creates a new list node                                |
	| `ft_lstadd_front` | Adds a node at the beginning of the list               |
	| `ft_lstsize`      | Counts the number of nodes                             |
	| `ft_lstlast`      | Returns the last node of the list                      |
	| `ft_lstadd_back`  | Adds a node at the end of the list                     |
	| `ft_lstdelone`    | Deletes a single node                                  |
	| `ft_lstclear`     | Deletes and frees an entire list                       |
	| `ft_lstiter`      | Applies a function to every node                       |
	| `ft_lstmap`       | Creates a new list by applying a function to each node |

	---

	## Resources

	### Documentation

	* The C Programming Language — Brian Kernighan & Dennis Ritchie
	* Linux manual pages (`man`)
	* GNU C Library Documentation
	* 42 official project subject
	* cppreference.com

	### References

	* [https://man7.org/](https://man7.org/)
	* [https://cplusplus.com/](https://cplusplus.com/)
	* [https://en.cppreference.com/w/c](https://en.cppreference.com/w/c)
	* [https://harm-smits.github.io/42docs/](https://harm-smits.github.io/42docs/)

	---

	## AI Usage

	AI tools were not used for implementing the project logic or writing the source code.

	Minor assistance may have included:

	* markdown formatting suggestions
	* README organization
	* grammar verification

	All technical decisions, debugging, implementations, and testing were completed manually.