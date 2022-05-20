#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("Enter a char");
scanf("%c",&c);
if(c=='a'|| c=='A'|| c=='e'|| c=='E'||c=='i'|| c=='o'|| c=='u' )
printf("vowel");
else
printf("consonent");
getch();
}