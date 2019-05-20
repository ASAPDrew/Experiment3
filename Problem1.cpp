#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
		int a[10], i ;
		for (i=0; i<10; i++)
		{
			cout << "Input integer " << i+1 << ": ";
			cin >> a[i];
			cout << "\n";
		}
		
		int b=a[0],c=a[0], d=0;
		float e;
		for (i=0; i<10; i++)
		{
			if (i >0 && a[i]>c)
			c=a[i];
			if (i >0 && a[i]<b)
			b=a[i];
			d+=a[i];
		}
		
		e=d/10.0;
		cout << "The Smallest integer: " << b << "\n";
		cout << "The Largest integer: " << c << "\n";
		cout << "The total of all values: " << d << "\n";
		cout << "The average of all values: " << e << "\n";
		
	_getch();
	return 0;
	}
