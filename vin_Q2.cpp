#include<iostream>
using namespace std;

int main()
{
	
	int a,b;

	cout << "Enter your age :- " ;
	cin >> a ;
	
	try
	{
		if(a < 18)
		{
			throw a ;
		}
		cout << "You are elegiable to vote..." ;
	}
	
	catch(...)
	{
		cout << "You are not elegiable to vote..." ;
	}
	
	return 0;
}
