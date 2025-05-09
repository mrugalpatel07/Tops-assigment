#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];

    printf ("\n enter the value in str1 = ");
    gets (str1);
    printf ("\n enter the value in str2 = ");
    gets (str2);

    printf ("\n original value of str1 = %s",str1);
    printf ("\n original value of str2 = %s",str2);

    strcat(str1,str2);
    printf ("\n the value of string after using concate function = %s",str1);
    printf ("\n the value of string after using concate function = %s",str2);

    int length = strlen(str1);
    printf ("\n the length of str1 = %d",length);
    printf ("\n the length of str2 = %d",length=strlen(str2));
    return 0;
}
