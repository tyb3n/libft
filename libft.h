/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:36:31 by tbenoist          #+#    #+#             */
/*   Updated: 2015/12/03 15:37:06 by tbenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

char			*lknb_strrev(char *str);
t_list			*lknb_lstrch(t_list *list, void *cont, size_t size);
void			lknb_lstadd_end(t_list **alst, t_list *new);
t_list			*lknb_lstget(t_list *l, int n);
int				lknb_pow(int n, int exp);
t_list			*lknb_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			lknb_lstiter(t_list *lst, void (*f)(t_list *elem));
void			lknb_lstadd(t_list **alst, t_list *new);
void			lknb_lstdel(t_list **alst, void (*del)(void *, size_t));
void			lknb_lstdelone(t_list **alst, void (*del)(void*, size_t));
t_list			*lknb_lstnew(void const *content, size_t content_size);
void			lknb_bzero(void *s, size_t n);
void			*lknb_memcpy(void *dst, const void *src, size_t n);
void			*lknb_memccpy(void *dst, const void *src, int c, size_t n);
void			*lknb_memset(void *b, int c, size_t len);
size_t			lknb_strlen(const char *s);
int				lknb_isalpha(int c);
int				lknb_isdigit(int c);
int				lknb_atoi(const char *str);
void			*lknb_memmove(void *dst, const void *src, size_t len);
void			*lknb_memchr(const void *s, int c, size_t n);
int				lknb_memcmp(const void *s1, const void *s2, size_t n);
char			*lknb_strdup(const char *s1);
char			*lknb_strcpy(char *dst, const char *src);
char			*lknb_strncpy(char *dst, const char *src, size_t n);
char			*lknb_strcat(char *s1, const char *s2);
char			*lknb_strncat(char *s1, const char *s2, size_t n);
size_t			lknb_strlcat(char *dst, const char *src, size_t size);
char			*lknb_strchr(const char *s, int c);
char			*lknb_strrchr(const char *s, int c);
char			*lknb_strstr(const char *s1, const char *s2);
char			*lknb_strnstr(const char *s1, const char *s2, size_t n);
int				lknb_strcmp(const char *s1, const char *s2);
int				lknb_strncmp(const char *s1, const char *s2, size_t n);
int				lknb_isalnum(int c);
int				lknb_isprint(int c);
int				lknb_isascii(int c);
int				lknb_toupper(int c);
int				lknb_tolower(int c);
void			*lknb_memalloc(size_t size);
void			lknb_memdel(void **ap);
char			*lknb_strnew(size_t size);
void			lknb_strdel(char **as);
void			lknb_strclr(char *s);
void			lknb_striter(char *s, void (*f)(char *));
void			lknb_striteri(char *s, void (*f)(unsigned int, char *));
char			*lknb_strmap(char const *s, char (*f)(char));
char			*lknb_strmapi(char const *s, char(*f)(unsigned int, char));
int				lknb_strequ(char const *s1, char const *s2);
int				lknb_strnequ(char const *s1, char const *s2, size_t n);
char			*lknb_strsub(char const *s, unsigned int start, size_t len);
char			*lknb_strjoin(char const *s1, char const *s2);
char			*lknb_strtrim(char const *s);
char			**lknb_strsplit(char const *s, char c);
char			*lknb_itoa(int n);
void			lknb_putchar(char c);
void			lknb_putstr(char const *s);
void			lknb_putendl(char const *s);
void			lknb_putnbr(int n);
void			lknb_putchar_fd(char c, int fd);
void			lknb_putstr_fd(char const *s, int fd);
void			lknb_putendl_fd(char const *s, int fd);
void			lknb_putnbr_fd(int n, int fd);
#endif
