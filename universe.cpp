#include<iostream>

using namespace std ;

int main()
{
	/**
	 * Making a variable for storing the input
	 * */
	int inp;
	
	while ((cin>>inp) && (inp!=42) )
	{
		cout << inp << endl ;
	}
	return 0 ;
}

