//Program to count how many times the word computer or science occured in an already existing text file RECORD
#include<fstream.h>   //included members of iostream also
#include<conio.h>
#include<string.h>
void count_word()
{
	char name[500];
	int count=0;
	ofstream of;
	of.open("RECORD",ios::app);
	of<<"I am a computer science student.";
	of.close();
	ifstream fi;
	fi.open("RECORD");
	while(!fi.eof())
	{
		fi>>name;
		if(strcmpi(name,"computer")==0||strcmpi(name,"science")==0)
		count++;
	}
	cout<<"\nNumber of times word 'computer' or 'science' occured is:\t";
	cout<<count;
	fi.close();
}
void main()
{
	clrscr();
	count_word();
	getch();
}
