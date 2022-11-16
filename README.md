# libft
This project is about coding the C library, more specifically creating our own library. Its main purpose is to get an idea of ​​how the standard functions work, how they are implemented, and where they can be used.

The project contains 43 functions:

= 23 functions from the standard library:
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isalpha.c">ft_isalpha</a> - checks if a character is an alphabetic letter
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isdigit.c">ft_isdigit</a> - checks if a character is a number
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isalnum.c">ft_isalnum</a> - Checks if a character is an alphabetic letter or a number
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isascii.c">ft_isascii</a> - checks if a character is an ascii character
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isprint.c">ft_isprint</a> - Checks if a character is a printable character
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strlen.c">ft_strlen</a> - returns the size of the string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memset.c"> ft_memset</a> - fills a memory area with the specified character
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_bzero.c">ft_bzero</a> - fills memory area with 0 (zeros)
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memcpy.c">ft_memcpy</a> - copies contents (non-overlapping) from one memory area to another
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memmove.c">ft_memmove</a> - copies contents from one memory area to another
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strlcpy.c">ft_strlcpy</a> - copies a string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strlcat.c">ft_strlcat</a> - copies a string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_toupper.c">ft_toupper</a> - convert characters to upper case
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_tolower.c">ft_tolower</a> - converts characters to lowercase
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strchr.c">ft_strchr</a> - searches for the first occurrence of the character c in the string pointed to by the argument str
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strrchr.c">ft_strrchr</a> - searches for the last occurrence of the character c in the string pointed to, by the argument str
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strncmp.c">ft_strncmp</a> - compares at most the first n bytes of str1 and str2
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memchr.c">ft_memchr</a> - searches for the first occurrence of the character c in the first n bytes of the string pointed to, by the argument str
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memcmp.c">ft_memcmp</a> - compares the first n bytes of memory area str1 and memory area str2
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strnstr.c">ft_strnstr</a> - locates the first occurrence of the null-terminated string "little" in the null-terminated string "big"
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_atoi.c">ft_atoi</a> - converts the string argument str to an integer
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_calloc.c">ft_calloc</a> - allocates the requested memory, sets the allocated memory to zero, and returns a pointer to it
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strdup.c">ft_strdup</a> - returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by str1

= 11 functions for working with character strings, which are either not in the libc library, or they have a different shape
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_substr.c">ft_substr</a> - allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strjoin.c">ft_strjoin</a> - allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strtrim.c">ft_strtrim</a> - allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_split.c">ft_split</a> - allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_itoa.c">ft_itoa</a> - allocates and returns a string representing the integer received as an argument
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strmapi.c">ft_strmapi</a> - applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string resulting from successive applications of ’f’
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_striteri.c">ft_striteri</a> - applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putchar_fd.c">ft_putchar_fd</a> - outputs the character ’c’ to the given file descriptor
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putstr_fd.c">ft_putstr_fd</a> - outputs the string ’s’ to the given file
descriptor
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putendl_fd.c">ft_putendl_fd</a> - outputs the string ’s’ to the given file descriptor
followed by a newline
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putnbr_fd.c">ft_putnbr_fd</a> - outputs the integer ’n’ to the given file
descriptor

= 9 functions for working with linked lists:
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstadd_back.c">ft_lstadd_back</a> - adds the node ’new’ at the end of the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstadd_front.c">ft_lstadd_front</a> - adds the node ’new’ at the beginning of the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstclear.c">ft_lstclear</a> - deletes and frees the given node and every successor of that node, using the function ’del’ and free
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstdelone.c">ft_lstdelone</a> - takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstiter.c">ft_lstiter</a> - iterates the list ’lst’ and applies the function
’f’ on the content of each node
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstlast.c">ft_lstlast</a> - returns the last node of the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstmap.c">ft_lstmap</a> - iterates the list ’lst’ and applies the function ’f’ on the content of each node
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstnew.c">ft_lstnew</a> - allocates and returns a new node
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstsize.c">ft_lstsize</a> - counts the number of nodes in a list
