#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Brian", "Swarit"};
    string numbers[] = {"+1-267-474-7681", "+1-949-468-2750"};
    
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Swarit") == 0)
        {
            printf("Found Number %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}