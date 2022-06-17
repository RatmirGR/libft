#include "libft.h"

static t_list	*ft_listnew(void *content)
{
	t_list	*list;

	list = NULL;
	list = (t_list *)malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->content = content;
		list->next = NULL;
	}
	return (list);
}

void	ft_listadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			last = *lst;
			while (last->next != NULL)
				last = last->next;
			last->next = new;
		}
		else
			*lst = new;
	}
}

void	ft_listclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		lst = NULL;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *))
{
	t_list	*nlist;
	t_list	*node;

	nlist = NULL;
	while (lst != NULL)
	{
		node = NULL;
		node = ft_listnew(f(lst->content));
		if (node != NULL)
		{
			ft_listadd_back(&nlist, node);
			lst = lst->next;
		}
		else
		{
			ft_listclear(&nlist, del);
			return (0);
		}
	}
	return (nlist);
}
