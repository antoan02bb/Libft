#include <string.h>

int main()
{
	(unsigned char)



	return 0;
}
#include "libft.h"

// c -> character(byte) I want to search for
// n -> number of bytes

void *memchr(const void *s, int c, size_t n) 
{
	const unsigned char *unsigned_str = (const unsigned char *)s;
	unsigned char unsigned_chr = (unsigned char)c;

	size_t i = 0;
	  while (i < n) {
        if (unsigned_str[i] == unsigned_chr) {
            return (void *)(us + i);
        }
        i++;
    }

    return NULL;
}