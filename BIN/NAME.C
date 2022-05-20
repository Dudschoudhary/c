#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int consonent;
	clrscr();
	printf("\nCharectors:-\n");
	for(c='a';c<='z';c++)
	{
		printf("\t%c",c);
	}
	printf("\nVowel is:-\n");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'|| c=='E'||c=='O'|| c=='I'|| c=='U')
		{
			printf("\t%c",c);
		}
	}
		printf("\nConsonent is:-\n");
	consonent=0;
	for(c='A';c<='Z';c++)
	{
		if(c=='A'|| c=='E'||c=='O'|| c=='I'|| c=='U')
		continue;
		else
		{
			printf("\t%c",c);
			consonent++;
		}
	}
	printf("\nTotal of Consonent:- %d",consonent);
	getch();
}