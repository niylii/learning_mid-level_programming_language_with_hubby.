#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
void	*malloc_checked(unsigned int b);
void	*_calloc(unsigned int nmemb, unsigned int size);
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char	*string_nconcat(char *s1, char *s2, unsigned int n);
int	*array_range(int min, int max);
#endif
