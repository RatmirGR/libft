#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "checktest/libft.h"

char *ft_strtrim2(char const *s1, char const *set);

// char myfunc(unsigned int a, char b)
// {
// 	(void) a;
// 	return (b);
// }

// void myfunc2(unsigned int a, char *c)
// {
// 	printf("%c", c[a]);
// }

// void	*ft_lstmap_f(void *t)
// {
// 	(void)t;
// 	return ft_strdup("OK !");
// }

int	main(void)
{
	//printf("%d = %d\n", isalpha('5'), ft_isalpha('5'));
	//printf("%d = %d\n", isdigit('a'), ft_isdigit('a'));
	//printf("%d = %d\n", isalnum('.'), ft_isalnum('.'));
	//printf("%d = %d\n", isascii('\t'), ft_isascii('\t'));
	//printf("%d = %d\n", isprint('\t'), ft_isprint('\t'));

	//char *s = "my text";
	//printf("%zu\n%zu\n", strlen(s), ft_strlen(s));

	//unsigned char s1[] = "my text1";
	//unsigned char s2[] = "my text2";
	//printf("%s\n%s\n", memset(s1, 97, 8), ft_memset(s2, 97, 8));

	//bzero(s1, 1); ft_bzero(s2, 1);
	//printf("%d - %d = %d - %d\n", s1[0], s1[1], s2[0], s2[1]);

	//unsigned char d1[10] = "good very";
	//unsigned char s1[10] = "my text";
	//unsigned char d2[5] = {'t', 'e', 'x', '\0'};
	//unsigned char s2[10] = "my text";
	//printf("%s\n", memcpy(&d1[4], &d1[3], 2));
	//printf("%s\n", ft_memcpy(&d2[4], &d2[3], 2));
	//printf("%s\n", memmove(&d1[4], &d1[3], 2));
	//printf("%s\n", ft_memmove(&d2[3], &d2[1], 8));

	//char d1[15] = "my text";
	//const char s1[10] = "very good";
	//char d2[15] = "my text";
	//const char s2[10] = "very good";
	//printf("%zu = %s\n", strlcpy(d1, s1, 0), d1);
	//printf("%zu = %s\n", ft_strlcpy(d2, s2, 0), d2);
	/*char dest[30]; memset(dest, 0, 30);
	printf("%s\n", dest);
	printf("%zu = %s\n", ft_strlcat(dest, "123", 0), dest);
	printf("%zu = %s\n", ft_strlcat(dest, "123", 0), dest);
	if (ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""))
		printf("rinst\n");*/
	//printf("%c = %c\n", toupper('h'), ft_toupper('h'));
	//printf("%c = %c\n", tolower('h'), ft_tolower('h'));

	//const char s1[] = "my text";
	//const char s2[] = "e";
	//printf("%s\n%s\n", strchr(s1, '\0'), ft_strchr(s2, '\0'));
	//printf("%s\n%s\n", strrchr(s1, 'm'), ft_strrchr(s2, 'm'));
	/*char		s2[] = "";
	printf("%s\n%s\n", strrchr(s2, '\0'), ft_strrchr(s2, '\0'));
	if (strrchr(s2, '\0'))
		printf("yes");*/
	//printf("%d\n%d\n", strncmp(s1, s2, 11), ft_strncmp(s1, s2, 11));

	//printf("%s\n%s\n", memchr(s1, 'x', 19), ft_memchr(s1, 'x', 19));
	//printf("%d\n%d\n", memcmp(s1, s2, 11), ft_memcmp(s1, s2, 11));

	//printf("%s\n%s\n", strnstr(s1, s2, 12), ft_strnstr(s1, s2, 12));

	//const char *s = "-123456727ast";
	//printf("%d\n%d\n\n", atoi(s), ft_atoi(s));

	/*int *p1 = (int *) calloc(5, sizeof(int));
	int *p2 = (int *) calloc(5, sizeof(int));*/
	/*int i = 0;
	int size = 8;
	int *p1 = calloc(size, sizeof(int));
	int *p2 = ft_calloc(size, sizeof(int));

	while (i < size)
	{
		printf("%d", p1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < size)
	{
		printf("%d", p2[i]);
		i++;
	}*/

	/*char str1[11]= "0123456789";
	char str2[11]= "0123456789";
	char str3[11]= "0123456789";
	char *d1 = strdup(str1);
	char *d2 = ft_strdup(str2);
	char *d3 = ft_strdup2(str3);
	printf("%s\n%s\n%s\n", d1, d2, d3);*/

	/*char s1[15] = "m";
	int st = 1; int en = 2;
	printf("%s\n", ft_substr(s1, st, en));*/
	//char str[10] = "tripouille";
	//size_t size = 42000;
	//printf("%s\n", ft_strsub2(str, 0, size));
	//printf("%s\n", ft_substr(str, 0, size));

	char s1[7] = "";
	char s2[14] = " is very good";
	printf("%s\n", ft_strjoin(s1, s2));

	/*=============================================*/
	//char s1[25] = ".,,, my ., text!.,...";
	//char s2[5] = ".,";
	//printf("%s\n", ft_strtrim(s1, s2));
	//char *s1 = ft_strtrim2("123", "");
	//char *s2 = ft_strtrim("123", "");
	//size_t i = strcmp(s, "123");
	//printf("%zu\n", i);
	//printf("%s\n%s\n", s, "123");
	//printf("%s = %s\n", s1, s2);
	/*=============================================*/


	// char s1[127] = "  my text  is verys good ";
	// char sep = ' ';
	// char **pp = NULL;
	// pp = ft_split(s1, sep);
	// int i = 0;
	// while (pp[i])
	// {
	// 	printf("%s\n", pp[i]);
	// 	++i;
	// }

	//char **pp = ft_split("  tripouille  42  ", ' ');
	//char	**p = NULL;
	//int		i = 0;
	//if (!(p = ft_split("lorem ipsum dolor sit amet. Suspendisse", ' ')))
	// {
	// 		write(1, "NULL", 4);
	// }
	// else
	// {
	// 	write(1, "1)no\n", 5);
	// 	while (p[i] != NULL)
	// 	{
	// 		int a = ft_strlen(p[i]);
	// 		write(1, p[i], a);
	// 		write(1, "\n", 1);
	// 		i++;
	// 	}
	// }
	//char	**st;
	//if (!(st = ft_split("lorem ipsum dolor sit amet. Suspendisse", '.')))
	//{}
	// {
	// 		write(1, "NULL", 4);
	// }
	// else
	// {
	// 	write(1, "1)no\n", 5);
	// 	while (st[i] != NULL)
	// 	{
	// 		int a = ft_strlen(st[i]);
	// 		write(1, st[i], a);
	// 		write(1, "\n", 1);
	// 		i++;
	// 	}
	// }
	// if (!tab2)
	// {
	// 	ft_print_result("NULL");
	// 		write(1, "\n", 1);
	// 		write(1, "yes", 1);
	// 		write(1, "\n", 1);
	// }
	// else
	// {
	// 	while (tab2[i] != NULL)
	// 	{
	// 		ft_print_result(tab2[i]);
	// 		write(1, "\n", 1);
	// 		write(1, "no", 1);
	// 		write(1, "\n", 1);
	// 		i++;
	// 	}
	// }
	/*=============================================*/

	//printf("%s\n%s\n", ft_itoa(-2147483647), ft_itoa2(-2147483647));
	/*char *i1;
	i1 = ft_itoa(-5859);
	printf("%s\n", i1);*/
	/*=============================================*/

	//const char s[8] = "my text";
	//printf("%s\n", ft_strmapi(s, myfunc));
	/*=============================================*/

	/*char s[8] = "my text";
	ft_striteri(s, myfunc2);
	printf("\n");
	ft_striteri2(s, myfunc2);*/
	/*=============================================*/

	/*int i = 2147483647;
	ft_putnbr_fd(i, 1);*/
	/*=============================================*/

	/*t_list *list = ft_lstnew("my text");
	printf("%s\n", list->content);
	t_list **glist = (t_list **)malloc(sizeof(t_list *));
	ft_lstadd_front(glist, list);
	t_list *list1 = ft_lstnew("my text1");
	ft_lstadd_front(glist, list1);
	t_list *list2 = ft_lstnew("my text2");
	ft_lstadd_front(glist, list2);
	printf("%s\n", glist[0]->content);
	printf("%s\n", glist[0]->next->content);
	printf("%s\n", glist[0]->next->next->content);*/

	// t_list *l = ft_lstnew(strdup(" 1 2 3 "));
	// t_list *ret;
	// l->next = ft_lstnew(strdup("ss"));
	// l->next->next = ft_lstnew(strdup("-_-"));
	// ret = ft_lstmap(l, ft_lstmap_f, ((void *)0));
	// printf("%s\n", ret->content);
	// printf("%s\n", ret->next->content);
	// printf("%s\n", ret->next->next->content);
	//printf("%d\n", ft_lstsize(*glist));
	return (0);
}
