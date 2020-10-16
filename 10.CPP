//Program to read contents of a text file
#include<conio.h>
#include<fstream.h>	//includes members of iostream also
#include<stdio.h>
void read()
{
	ifstream fi;
	char name[500];
	fi.open("rec.txt");
	while(!fi.eof())
	{
		fi.getline(name,100);
		puts(name);
	}
}
void main()
{
	clrscr();
	read();
	getch();
}
