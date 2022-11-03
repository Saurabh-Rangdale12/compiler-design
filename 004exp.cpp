#include<bits/stdc++.h>
using namespace std;
int  main()
{	
    string s;
	cout<<"\nThe grammar is:\nS -> aS\nS -> Sb\nS -> ab\n";
	cout<<"Enter a string: ";
    getline(cin, s);
	if(s[0]!='a')
	{	cout<<"Invalid String :: incorrect 1st character.";
		exit(0);                                    }
	int n=1;
	while(s[n]=='a')  	n++;
	if ( s[n] != 'b')
	{	cout<<"Invalid String :: not belong to grammar.";
		exit(0);	}
	n++;
	while (s[n]=='b')      n++;
	if (s [n] != '\0')
	{	cout<<"Invalid String :: not belong to grammar.";
		exit(0);}

	cout<<"Valid String.";
	
	 return 0;
}