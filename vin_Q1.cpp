#include<iostream>
using namespace std;

int main()
{
	int a,b,ans;
	
	cout << "Enter First value :- " ;
	cin >> a;
	cout << "Enter Second value :- " ;
	cin >> b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		ans = a / b ;
		cout << "Answer :- " << ans ;
	}
	
	catch(...)
	{
		cout << "Can't divide by zero....." ;
	}
	
	return 0;
}
