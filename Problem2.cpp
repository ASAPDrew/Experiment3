#include <iostream>
#include <conio.h>
using namespace std;

	int main()
	{
		double A[7], B[7], C[7];
		for (int x = 0; x < 7; x++)
		{
			cout << "Province A, Day " << x + 1 << ": "; 
			cin >> A[x];
		}
		
		for (int x = 0; x < 7; x++)
		{
			cout << "Province B, Day " << x + 1 << ": "; 
			cin >> B[x];
		}
		
		for (int x = 0; x < 7; x++)
		{
			cout << "Province C, Day " << x + 1 << ": "; 
			cin >> C[x];
		}
		
			cout << "\n"; 
			cout << "Displaying temperatures for a week in Province A:\n";
			for (int x = 0; x < 7; x++)
			{
				cout << "Day "<< x + 1 << ": " << A[x] << endl;
			}
			
			cout << "\n"; 
			cout << "Displaying temperatures for a week in Province B:\n";
			for (int x = 0; x < 7; x++)
			{
				cout << "Day "<< x + 1 << ": " << B[x] << endl;
			}
			
			cout << "\n"; 
			cout << "Displaying temperatures for a week in Province C:\n";
			for (int x = 0; x < 7; x++)
			{
				cout << "Day "<< x + 1 << ": " << C[x] << endl;
			}
		
	_getch();
	return 0;
	}
