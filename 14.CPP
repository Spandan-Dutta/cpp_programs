//Program to count the number of line ending with e or E
#include<fstream.h>   //included iostream members also
#include<conio.h>
#include<string.h>
void count_line()
{
	int count=0,l;
	char name[500];
	ofstream of;
	of.open("RECORD",ios::app);
	of<<"Please\n";
	of<<"Enter your name";
	of.close();
	ifstream fi;
	fi.open("RECORD");
	while(!fi.eof())
	{
		fi.getline(name,1000);
		l=strlen(name);
		if(name[l-1]=='e'|name[l-1]=='E')
		count++;
		if(!fi)
		break;

	}
	cout<<"\nNumber of lines ending with e or E are: ";
	cout<<count;
}
void main()
{
	clrscr();
	count_line();
	getch();
}
