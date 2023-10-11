#include <stdio.h>
#include <string.h>


int main()
{
    char src[] = "copy this";
    char dest[100];

    // strlen(src) + 1 -> we get the number of characters in the source string, not including the null terminator
    char *dest_ptr = memcpy(dest, src, strlen(src) + 1);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    printf("dest_ptr: %p\n", dest_ptr);
    printf("dest: %p\n", dest);


    double src_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double dest_array[5];

    memcpy(dest_array, src_array, sizeof(src_array));

    for (int i = 0; i < 5; i++)
    {
        printf("dest_array[%d] = %f\n", i, dest_array[i]);
    }
    

    return 0;
}
