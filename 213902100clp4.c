/*
Naimul Haque Bhuyan Rahat
Id: 213903100
*/

#include<stdio.h>
#include<stdlib.h>

int compare(char[],char[]);

int main(){
    int num;
    do{
        system("cls");
        printf("\n\n\n");
        printf("============================== ********************************* ==============================\n\n");
        printf("\t\t\t\t\t[1]=> STRCAT\n\n");
        printf("\t\t\t\t\t[2]=> STRLEN\n\n");
        printf("\t\t\t\t\t[3]=> STRREV\n\n");
        printf("\t\t\t\t\t[4]=> STRCMP\n\n");
        printf("\t\t\t\t\t[5]=> STRCPY\n\n");
        printf("\t\t\t\t\t[6]=> STRLWR\n\n");
        printf("\t\t\t\t\t[7]=> STRUPR\n\n");
        printf("\t\t\t\t\t[8]=> Exit\n\n");
        printf("============================== ********************************* ==============================\n\n");
        printf("\t\t\t Enter Your Choice: ");
        scanf("%d",&num);

        switch(num){
        case 1:
            strCat();
            break;
        case 2:
            strLen();
            break;
        case 3:
            strRev();
            break;
        case 4:
            strCmp();
            break;
        case 5:
            strCpy();
            break;
        case 6:
            strLwr();
            break;
        case 7:
            strUpr();
            break;
        }

        getch();
    }while(num!=8);

    return 0;
}

void strCat(){
    char str1[50], str2[50], i, j;
   printf("\nEnter first string: ");
   fflush(stdin);
   gets(str1);

   printf("\nEnter second string: ");
   gets(str2);
   for(i=0; str1[i]!='\0'; ++i);
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   str1[i]='\0';
   printf("\nOutput: %s",str1);
}

void strLen(){
    char str1[50], i;
   printf("\nEnter string: ");
   fflush(stdin);
   gets(str1);
   for(i=0; str1[i]!='\0'; ++i);
   printf("StrLen = %d",i);
}

void strRev(){
    char str1[50], str2;
    int i, len=0,length=0;
   printf("\nEnter string: ");
   fflush(stdin);
   gets(str1);
   for(i=0; str1[i]!='\0'; ++i,len++);
   length= len-1;
   for(i=0;i<len/2;i++){
      str2=str1[i];
      str1[i]=str1[length];
      str1[length--]=str2;
   }
   printf("%s",str1);
}

void strCmp(){
    char str1[20];
   char str2[20];
   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);
   int c= compare(str1,str2);
   if(c==0)
   printf("strings are same");
   else
   printf("strings are not same");

    return 0;
}
int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0;
    else
    return 1;
}

void strCpy(){
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fflush(stdin);
    gets(s1);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

}

void strLwr(){
    char Str1[100];
  	int i;

  	printf("\n Please Enter a String to Convert into Lowercase :  ");
  	fflush(stdin);
  	gets(Str1);

  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The given String in Lower Case = %s", Str1);
}

void strUpr(){
    char Str1[100];
  	int i;

  	printf("\n Please Enter a String that you want to Convert into Uppercase :  ");
  	fflush(stdin);
  	gets(Str1);

  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] = Str1[i] -32;
		}
  	}

  	printf("\n The given String in Upper Case = %s", Str1);
}



