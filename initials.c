#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 
int main(void)
{
    // Get name and check that it is not NULL
    string name = GetString();
    
    if (name != NULL)
    {
        // False when iterator is in spaces, true when it is in a word
        bool nameStarted = false;
        
        // Iterate through the characters of the name
        for (int i = 0, length = strlen(name); i < length; i++)
        {
            char c = name[i];
            
            // Check if the char is the first letter of a word
            if (c != ' ' && nameStarted == false)
            {
                printf("%c", toupper(c));
                nameStarted = true;
            }
            
            // Notice if the current word has ended
            if (c == ' ')
            {
                nameStarted = false;
            }
        }
        
        printf("\n");
    }
    
}