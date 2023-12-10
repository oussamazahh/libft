#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main () {
   	//printf("%zu\n",ft_strlcat("pqrstuvwxyz", "abcd", 4));
	//printf("%zu\n",strlcat("pqrstuvwxyz", "abcd", 4));
	char *s1 = "A";
 	size_t max = ft_strlen(s1) + 1;
 	char *i2 = ft_strnstr(s1, s1, max);
	printf("%s\n",  i2);
}
