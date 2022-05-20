#include<stdio.h>
#include<conio.h>
char c;
int count,vowels=0,consonents=0;
void smallalphabate()
{
	printf("\nSmall Alphaate's:-\n");
	for(c='a';c<='z';c++)
	{
		printf("\t%c",c);
	}
}
void capitalalphabate()
{
	printf("\nSmall Alphaate's:-\n");
	for(c='A';c<='Z';c++)
	{
		printf("\t%c",c);

	}
}
void allalpha()
{
	count=0;
	for(c='a';c<='z';c++)
	{
		count++;
	}
		printf("\nTotal Alphabate is:- %d",count);
}
void vowel()
{
	printf("Vowels:-");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'||c=='E' || c=='I'|| c=='O' || c=='U')
		{
			printf("\t%c",c);
			vowels++;
		}
	}
		printf("\n");
		printf("\tTotasl vowel's Alphabates:-%d",vowels);

}
void consonent()
{
	printf("Consonents:-");
	for(c='A';c<='Z';c++)
	{
		if(c=='A'||c=='E' || c=='I'|| c=='O' || c=='U')
		continue;
		else
		{
			printf("\t%c",c);
			consonents++;
		}
	}
		printf("\n");
		printf("\tAll are Consonent's in Alphabate's:-%d",consonents);
}
void main()
{
	int opction;
	clrscr();
while(1)
{
	printf("\nEnter a opctions:-");
	scanf("%d",&opction);
	switch(opction)
	{
		case 0 :
		{
			exit();
			break;
		 }
		 case 1 :
		 {
			smallalphabate();
			break;
		 }
		 case 2 :
		 {
			capitalalphabate();
			break;
		 }
		 case 3 :
		 {
			allalpha();
			break;
		 }
		 case 4 :
		 {
			vowel();
			break;
		 }
		 case 5 :
		 {
			consonent();
			break;
		 }
		 case 6 :
		 {
			clrscr();
			break;
		 }
		 default :
		 {
			printf("Worng Value's......");
		 }
	}
}
getch();
}