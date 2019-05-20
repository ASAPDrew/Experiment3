#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

	int main()
	{
		char a[50], c; 
		int b, i, j;
		
		cout << "Please enter characters to be sorted in ascending order: \n";
		cin >> a;
		b=strlen(a);

		for (j=0; j<b; j++)
		for (i=0; i<b-1; i++)
		{
			if (a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
			
		}
		
		cout << "\nSorted array: \n";
		cout << a;
		cout << "\nThe size of the array is " << b << " characters.";
		
	_getch();
	return 0;
	}
	
