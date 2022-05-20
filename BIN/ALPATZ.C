#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int count=0,vowel=0,consonent=0;
	clrscr();
		printf("\nBy -Duds Choudhary");
		printf("\nAlphabate a to z-:\n ");
		printf("\nCapital Alphabates-:\n ");
	for(c='A';c<='Z';c++)
	{
		printf("\t%c",c);
	}
		printf("\n");
		printf("\nSmall Alphabates-:\n");

	for(c='a';c<='z';c++)
	{
		printf("\t%c",c);
	}
	printf("\nVovels is-:");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'|| c=='E'|| c=='I' || c=='O'|| c=='U' )
		{
			printf("\t%c",c);
			vowel++;
		}
	}
		printf("\n");
		printf("\tAll the Vowels Count-: %d",vowel);
		printf("\nConsonent is-:\n");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'|| c=='E'|| c=='I' || c=='O'||  c=='U' )
		   continue;
		else{
			printf("\t%c",c);
			consonent++;
		}
	}
		printf("\t%d\n",consonent);

		printf("\nDuds Name Alphabates-:\n");
	for(c='A';c<='Z';c++)
	{
		if(c=='M'|| c=='Y'|| c=='N' || c=='A'|| c=='M' || c=='E'|| c=='I'|| c=='S' || c=='D'|| c=='U'|| c=='D' || c=='S'|| c=='U')
		{
			printf("\t%c",c);
			count++;
		}
	}
			printf("\nMu Name is Duds all the Alphaments\t");
			printf("\nAlphabate is-: %d",count);

getch();
}