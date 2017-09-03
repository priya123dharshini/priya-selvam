#include <stdio.h>
int main()
{
    char  str[100];
    int countDig,countAlp,countSplChar,countSps;
    int counter;
    countDig=countAlp=countSplChar=countSps=0;
    printf("Enter a string: ");
    gets(str);
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
            countDig++;
        else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
            countAlp++;
        else if(str[counter]==' ')
            countSps++;
        else
            countSplChar++;
    }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDig,countAlp,countSps,countSplChar);
    return 0;
}
