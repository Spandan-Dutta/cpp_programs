//Program to count the number of lines in a text file
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void line_count()
{
	int count=0;
	char name[500];
	ifstream fi;
	fi.open("RECORD");
	while(!fi.eof())
	{
		fi.getline(name,1000);
		if(!fi)
		break;
		count++;
	}
	cout<<"\nThe number of lines in already existing file 'RECORD' are: ";
	cout<<count;
}
void main()
{
	clrscr();
	line_count();
	getch();
}
