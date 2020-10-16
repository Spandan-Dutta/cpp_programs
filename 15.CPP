//Program to count the occurance of character t or T in a text file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
void count_char()
{
	int count=0,l;
	char ch;
	ifstream fi;
	fi.open("RECORD");
	while(!fi.eof())
	{
		fi.get(ch);
		if(ch=='t'|ch=='T')
		count++;
		if(!fi)
		break;
	}
	cout<<"\nNumber of times t or T occured is:  ";
	cout<<count;
}
void main()
{
	clrscr();
	count_char();
	getch();
}
