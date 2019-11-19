/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquince <jquince@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:33:02 by jquince           #+#    #+#             */
/*   Updated: 2019/10/14 14:00:15 by jquince          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(char const *str);
int					ft_strnlen(const char *str, int n);
int					ft_isspace(int i);
size_t				ft_strlcat(char *dst, const char *src, int lenght);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(const char *s);
char				*ft_strtrim(char const *s);
char				*ft_positive(int nbr);
char				*ft_negative(int nbr);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*strnstr(const char *h, const char *n, size_t len);
char				*ft_strrchr(char const *s, int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_wn(const char *str, char c);
int					ft_strncmp(const char *s1, const char *s2, int n);
int					ft_isalpha(int str);
int					ft_nlen(int n);
int					ft_isdigit(int str);
int					ft_len(const char *ptr, char c);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_atoi(char *str);
int					ft_isprint(int i);
int					ft_tolower(int i);
int					ft_toupper(int i);
int					ft_isascii(int i);
int					ft_strequ(char const *s1, char const *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strncat(char *s1, char *s2, int n);
int					ft_isalnum(int str);
char				*ft_strstr(char *str, char *to_find);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_putnbr(int n);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_putendl(char const *s);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strnstr(const char *h, const char *n, size_t len);
void				ft_strclr(char *s);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);

#endif
