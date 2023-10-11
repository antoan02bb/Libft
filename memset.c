#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10];
    
    // I can use memset to asign some value to entire chunks of memory

    memset(buffer, 'a', sizeof(char) * 5); 
    memset(buffer+5, 'd', sizeof(char) * 5);

    for (int i = 0; i < 10; i++)
      printf("%c", buffer[i]);

    printf("\n");
} 

