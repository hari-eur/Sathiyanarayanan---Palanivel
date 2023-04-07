#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char str[100];
    char cont;
    do{
        char choice;
        printf("1. Encrypt\n2. Decrypt\n3. Exit\n");
        scanf("%c",&choice);
        if(choice=='E' || choice=='e')
        {
            printf("\nEnter the file to be encrypted:");
            char filename[100];
            scanf("%s",filename);
            FILE *eptr=fopen(filename,"r+");
            if(eptr==NULL)
            {
                printf("\nCannot open the file\n");
                exit(1);
            }
            FILE *dptr=fopen("decrypt.txt","w");
            if(dptr==NULL)
            {
                printf("\nCannot open the file\n");
                exit(1);
            }
            while(fgets(str,10,eptr)!=NULL)
            {
                for(int i=0;str[i]!='\0';i++)
                {
                    int key=5;
                    if(isalnum(str[i])) 
                    {
                        if(islower(str[i]))
                        {
                            str[i]=(str[i]-'a'+key)%26+'a';
                        }
                        if(isupper(str[i]))
                        {
                            str[i]=(str[i]-'A'+key)%26+'A';
                        }
                        if(isdigit(str[i]))
                        {
                            str[i]=(str[i]-'0'+key)%10+'0';
                        }
                    }
                }
                fputs(str,stdout);
                fputs(str,dptr);
            }
            fclose(dptr);
            fclose(eptr);
        }
        else if(choice=='D' || choice=='d')
        {
            printf("\nEnter the file to be decrypted:");
            char filename[100];
            scanf("%s",filename);
            FILE *dptr=fopen(filename,"r+");
            if(dptr==NULL)
            {
                printf("\nCannot open the file\n");
                exit(1);
            }
            while(fgets(str,10,dptr)!=NULL)
            {
                for(int i=0;str[i]!='\0';i++)
                {
                    int key=5;
                    if(isalnum(str[i])) 
                    {
                        if(islower(str[i]))
                        {
                            str[i]=(str[i]-'a'-key+ 26)%26+'a';
                        }
                        if(isupper(str[i]))
                        {
                            str[i]=(str[i]-'A'-key+ 26)%26+'A';
                        }
                        if(isdigit(str[i]))
                        {
                            str[i]=(str[i]-'0'-key+ 10)%10+'0';
                        }
                    }
                }
                fputs(str,stdout);
            }
            fclose(dptr);
        }
        else if(choice=='Q' || choice=='q')
        {
            printf("\nExiting the program");
            exit(1);
        }
        else
        {
            printf("\nInvalid choice\n");
        }
        printf("\nDo you want to continue the program[y/n]: ");
        scanf(" %c",&cont);
    }while(cont=='y' || cont=='Y');
    return 0;
}
