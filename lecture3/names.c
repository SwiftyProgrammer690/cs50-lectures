#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // What we search
    string names[] = {"David", "Jones", "Ginny", "Ron", "Swarit", "Matteo", "Penny"};
    
    // Linear Search
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Swarit") == 0)
        {
            printf("Found it!\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}