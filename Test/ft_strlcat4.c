#include <stdio.h>
#include <string.h>

int main() {
    char dest[10] = "Hello,";
    const char *src = " World!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length of concatenated string %zu\n", result);

    return 0;
}