// 1st - determine the length of the dest string with the help of strlen function
// Why - determine how much space is available in the destination buffer.
// 2nd - calculate the space remaining in the destination buffer(dstsize)
// 0alculate the total length of the concatenated string(incl. null-terminator)

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t destsz)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0' && i1 < destsz)
	{
		i1++;
	}
	while (source[i2] != '\0' && (i1 + i2 + 1) < destsz)
	{
		dest[i1 + i2] = source[i2];
		i2++;
	}
	if (i1 < destsz)
		dest[i1 + i2] = '\0';
	return (i1 + ft_strlen(source));
}

#include <stdio.h>
#include <string.h>

int main() {
    char dest[10] = "Hello,";
    const char *src = " World!";

    size_t result = strlcat(dest, src, sizeof(dest));
    size_t result1 = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", result);

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", result1);

    return 0;
}

