#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *buf, int val, size_t count);
size_t			ft_strlen(const char *c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
void			ft_bzero(void *c, size_t len);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
int				ft_toupper(int s);
int				ft_tolower(int s);
char			*ft_strchr(const char *str, int s);
char			*ft_strrchr(const char *str, int s);
int				ft_strncmp(const char *s1, const char *s2, size_t num);

#endif
