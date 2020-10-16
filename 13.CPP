// Program to count the number of lines starting with A or a
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void count_line()
{
	int count=0;
	char name[500];
	ofstream of;
	of.open("RECORD",ios::app);
	of<<"An Elephant";
	of.close();
	ifstream fi;
	fi.open("RECORD");
	while(!fi.eof())
	{
		fi.getline(name,1000);
		if(name[0]=='a'|name[0]=='A')
		count++;
		if(!fi)
		break;
	}
	cout<<"\Number of lines starting with A or a are: ";
	cout<<count;
}
void main()
{
	clrscr();
	count_line();
	getch();
}
