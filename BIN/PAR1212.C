#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int vowel=0,consonent=0;
	clrscr();
	printf("Alphabate is:-");
	for(c='A';c<='Z';c++)
	{
		printf("\t%c",c);
	}
	printf("\nVowels is:-");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'|| c=='E' || c=='I'|| c=='O'|| c=='U')
		{
			printf("\t%c",c);
			vowel++;
		}
	}
	printf("\n");
	printf("\nAll the vowels are Alphabates:-%d",vowel);
	printf("\nConsonent is:-\n");
	for(c='A';c<='Z';c++)
	{
		if(c=='A' || c=='I' || c=='O' || c=='U' || c=='E')
		continue;
	       else
		{
			printf("\t%c",c);
			consonent++;
		}
	}
	printf("\n");
	printf("All the consonent are Alphabate:-%d",consonent);

	getch();
}
