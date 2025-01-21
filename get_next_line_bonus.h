#ifndef GET_NEXT_LINE_BONUS
# define GET_NEXT_LINE_BONUS

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# define OPENFD 1024

void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strlen(char *str);
char	*get_next_line(int fd);
# endif
