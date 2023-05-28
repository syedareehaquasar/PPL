#include <stdio.h>
#include <string.h>

void main()
{
    char str[50];
    char temp[20];
    char choice, ch;
    // printf("For ")
    printf("Syeda Reeha Quasar 14114802719 \n");
    puts("To get the length of string, choose 'L'.");               // strlen();//
    puts("To convert the whole string in lower case, choose 'l'."); // strlwr();
    puts("To convert the whole string in upper case, choose 'U'."); // strupr();
    puts("To append a string behind other, choose 'A'.");           // strcat();//
    puts("To copy a string into another, choose 'c'.");             // strcpy();//
    puts("To compare two strings, choose 'C'.");                    // strcmp();//
    puts("To find out first ocurence of given character in a string, choose 'O'");
    // strchr();
    puts("To find out first ocurence of given string in another string, choose 'S'");
    // strstr();
    puts("To reverse the string, choose 'R'"); // strrev();//
    printf("\nEnter Your Choice: ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'L':
        printf("\nEnter The String To Get Its Length: ");
        scanf("%s", str);
        printf("The Length Of The Entered String Is: %d", strlen(str));
        break;
    case 'l':
        printf("\nEnter The String To Convert It Into Lower Case : ");
        scanf("%s", str);
        printf("The Entered String In Lowercase: %s", strlwr(str));
        break;
    case 'U':
        printf("\nEnter The String To Convert It Into Upper Case : ");
        scanf("%s", str);
        printf("\nThe Entered String In Lowercase: %s", strupr(str));
        break;
    case 'A':
        printf("\nEnter The First String: ");
        scanf("%s", str);
        printf("Enter The Second String To Append It Behind First One:");
        scanf("%s", temp);
        strcat(str, temp);
        printf("\nNow, The First String Is: %s", str);
        break;
    case 'c':
        printf("\nEnter The First String: ");
        scanf("%s", str);
        printf("Enter The Second String: ");
        scanf("%s", temp);
        strcpy(str, temp);
        printf("\nNow, The First String Is: %s", str);
        printf("\nAnd, The Second String Is: %s", temp);
        break;
    case 'C':
        printf("\nEnter The First String: ");
        scanf("%s", str);
        printf("Enter The Second String: ");
        scanf("%s", temp);
        if (strcmp(str, temp) == 0)
            printf("\nBoth Strings Are Similar.");
        else
            printf("\nBoth Strings Are Different.");
        break;
    case 'O':
        printf("\nEnter The String: ");
        scanf("%s", str);
        printf("Enter The Character To Be Searched: ");
        scanf("%c", &ch);
        printf("\nThe First Occurence of Character Is At: %s", strchr(str, ch));
        break;
    case 'S':
        printf("\nEnter The String: ");
        scanf("%s", str);
        printf("Enter The String To Be Searched: ");
        scanf("%s", temp);
        printf("\nThe First Occurence of Character Is At: %s", strstr(str, temp));
        break;
    case 'R':
        printf("\nEnter The String To Get Its Reverse: ");
        scanf("%s", str);
        printf("\nThe Reverse Of The Entered String Is: %s", strrev(str));
        break;
    default:
        printf("\nYou Entered A Wrong Choise.");
        break;
    }
}
