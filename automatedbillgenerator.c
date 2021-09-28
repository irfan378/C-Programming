#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replaceword(const char * str, const char * oldword, const char * newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlength = strlen(newword);
    int oldwordlength = strlen(oldword);
    // lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldwordlength - 1;
        }
    }
    // making  a new string to fit int the replaced word
    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);
    i = 0;
    while (*str)
    {
        // compare the substring with result
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was %s\n", str);
    // call the replaceword function and generate newstr
   char *newstr;
    newstr=replaceword(str,"{{item}}","Table fan");
    newstr=replaceword(newstr,"{{outlet}}","ram laxmi fan outlet");
    newstr=replaceword(newstr,"{{name}}","harry");
 
    printf("The actual bill generated is : %s\n", newstr);
    printf("The generated bill has been written to the file genbill.txt\n");
    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}