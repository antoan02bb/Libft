#include <stdio.h>
#include <string.h>
#include "libft.h"


size_t
     ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
     {
        // 1st - determine the length of the dest string with the help of strlen function
        // Why - determine how much space is available in the destination buffer.
        size_t dst_length = ft_strlen(dst);

        // 2nd - calculate the space remaining in the destination buffer(dstsize)
        size_t space_remaining = dstsize - dst_length - 1;

        if(space_remaining > 0)
        {
            strncat(dst, src, space_remaining);
        }

        //Calculate the total length of the concatenated string(incl. null-terminator)
        size_t total_length = dst_length + ft_strlen(src);

        return total_length;
     }
    
#include <stdio.h>
#include <string.h>

int main() {
    char dest[10] = "Hello,";
    const char *src = " World!";

    size_t result = strlcat(dest, src, sizeof(dest));
    size_t my_result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", result);

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", my_result);

    return 0;
}

