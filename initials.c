#include <ctype.h>
#include <cs50.h>
#include <string.h>

//*  CS50 initials (more comfortable) solution
//     author James Meehan
//*

int main (void) 
{
    // Prompt user for name
    string s = get_string();
    if (s != NULL)
    {
        //If string is valid and first character is a letter, print first initial
            if (s[0] != ' ') 
            {
                printf("%c", toupper(s[0]));
            }
            
             //Iterate through the string and output each letter after a space
    for (int i = 1, n = strlen(s); i < n; i++)
        {     
            if (s[i-1] == ' ' && s[i] != ' ') 
            {
                printf("%c", toupper(s[i]));
            }
        }
    printf("\n");
    }
    
}
