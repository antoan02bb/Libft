#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	size_t					i;

	if(!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

int main() {
    char str[] = "Hello, World!";
    size_t len = strlen(str);

    // Using the standard memset function to zero out memory
    memset(str, 0, len);

    // Printing the string after memset
    printf("After memset: %s\n", str);

    // Resetting the string
    strcpy(str, "Hello, World!");

    // Using the custom ft_bzero function to zero out memory
    ft_bzero(str, len);

    // Printing the string after custom bzero
    printf("After ft_bzero: %s\n", str);

    return 0;
}

