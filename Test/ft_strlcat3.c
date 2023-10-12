// Not working in the end -> didnt compile
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dest_length;
	size_t src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);

	j = dest_length;
	i = 0;

	if(dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dest[j] = src[i]; 
			i++;
			j++;
		}
		
		
	}
	if (dest_length >= size)
			dest_length = size;
	return(dest_length + src_length);
}

#include <stdio.h>  
#include <string.h>

int main() {
    char dest[10] = "Hello,";
    const char *src = " World!";

    size_t result = strlcat(dest, src, sizeof(dest));
    //size_t my_result = ft_strlcat2(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", result);

    // printf("Concatenated string: %s\n", dest);
    // printf("Total length of concatenated string %zu\n", my_result);

    return 0;
}