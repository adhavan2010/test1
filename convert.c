# include <stdio.h>
# include <ctype.h>

void main()
{
    printf("my name is adhavan\n");
    char letter;
    char result;
    letter = 'A';
    while(letter != '0') 
    {
        printf("type a lower case letter and 0 for exit\n");
        scanf("%c",&letter);
        printf("\n");
        result = toupper(letter);
        printf("%c\n",result);
    }  


}