#include <stdio.h>
int main() 
{
    FILE *fp1;
    char text[100];
    fp1 = fopen("first.txt","w");
    fprintf (fp1,"\nhello world!");
    fprintf (fp1,"\nhow are you?");
    fclose(fp1);
    fp1 = fopen("first.txt","r");
    while(fgets(text,sizeof(text),fp1))
    {
        printf ("%s",text);
    }
    fclose(fp1);
    printf ("\n operation sucessfull");

    return 0;
}
