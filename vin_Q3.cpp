#include<iostream>
using namespace std;

bool upper(const string&pass)
{
	char C;
	
	for( C : pass)
	{
		if(C>='A'&&C<='Z')
		{
			return true;
		}
	}
	return false;
}

int main()
{
	
	string pass ;
	
	cout << "Enter password :- " ;
	cin >> pass ;
	
	if(upper(pass))
	{
		cout << "Valid password...." << endl ;
	}
	else
	{
		cout << "Password must contain atleast one uppercase letter..." << endl ;
	}
	
	return 0;
}
