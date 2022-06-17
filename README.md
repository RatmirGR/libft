# libft
This project is about coding the C library, more specifically creating our own library. Its main purpose is to get an idea of ​​how the standard functions work, how they are implemented, and where they can be used.

The project contains 43 functions:

= 23 functions from the standard library:
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_isalpha.c">ft_isalpha</a> - Checks if a character is an alphabetic letter
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
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strchr.c">ft_strchr</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strrchr.c">ft_strrchr</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strncmp.c">ft_strncmp</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memchr.c">ft_memchr</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_memcmp.c">ft_memcmp</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strnstr.c">ft_strnstr</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_atoi.c">ft_atoi</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_calloc.c">ft_calloc</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strdup.c">ft_strdup</a> -

= 11 functions for working with character strings, which are either not in the libc library, or they have a different shape
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_substr.c">ft_substr</a> - getting a substring
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strjoin.c">ft_strjoin</a> - string join
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strtrim.c">ft_strtrim</a> - trim spaces at the beginning and end of a string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_split.c">ft_split</a> - split a string into arrays of strings by a given separator
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_itoa.c">ft_itoa</a> - convert number to string
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_strmapi.c">ft_strmapi</a>
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_striteri.c">ft_striteri</a>
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putchar_fd.c">ft_putchar_fd</a>
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putstr_fd.c">ft_putstr_fd</a>
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putendl_fd.c">ft_putendl_fd</a>
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_putnbr_fd.c">ft_putnbr_fd</a>

= 9 functions for working with linked lists:
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstadd_back.c">ft_lstadd_back</a> - goes to the end of the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstadd_front.c">ft_lstadd_front</a> - goes to the beginning of the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstclear.c">ft_lstclear</a> - clears the list
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstdelone.c">ft_lstdelone</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstiter.c">ft_lstiter</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstlast.c">ft_lstlast</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstmap.c">ft_lstmap</a> -
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstnew.c">ft_lstnew</a> - creates a new node
  - <a href="https://github.com/RatmirW/libft/blob/main/libft/ft_lstsize.c">ft_lstsize</a> - Gets the length of the linked list
