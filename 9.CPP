//Program to write records in a text file
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void write()
{
	char ch,name[500];
	cout<<"\nProgram to write records in a txt file\n";
	char ch2='y';
	ofstream fo;
	fo.open("rec.txt");
	do
	{
		cout<<"\n\nEnter the name:	\n";
		gets(name);
		fo<<name<<endl;
		cout <<"\nWant to write more records??...(y/n)	";
		cin>>ch2;
	}	while(ch2=='y');
	fo.close();
}

void main()
{
	clrscr();
	write();
	getch();
}
