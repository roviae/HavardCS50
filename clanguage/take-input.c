#include <stdio.h>
#include <stdlib.h>
int main(void)
{
        char name[20];

        printf("Enter your name: ");
        fgets(name, 20, stdin);
        printf(" Hello %s\n", name);
}
