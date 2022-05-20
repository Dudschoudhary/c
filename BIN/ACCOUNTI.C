#include<stdio.h>
#include<conio.h>
char name[20] ,father[30],mother[30],email[30],password[30];
int acc=61281,id=1;
int accArray[50],accid[50];
int i,j,n;
void persnoldeatils()
{
	gets(name);
	gets(father);
	gets(mother);
	gets(email);
	gets(password);
	clrscr();
	strupr(name);
	strupr(father);
	strupr(mother);
	strlwr(email);
	strupr(password);
	printf("Name:-");
	puts(name);
	printf("Father's Name:-");
	puts(father);
	printf("Mother's Name:-");
	puts(mother);
	printf("Email-id:-");
	puts(email);
	printf("password:-");
	puts(password);
}
void accountdetails()
{
  printf("Account Number:- %d",acc);
}
void main()
{
	clrscr();
	persnoldeatils();
	accountdetails();
getch();
}