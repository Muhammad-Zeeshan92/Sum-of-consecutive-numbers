#include<iostream>
#include<string>
using namespace std;
int main() {
	int x =0 ;
	int y = 0 ;
	int sum = 0;
	
	cout << "Enter first numbers"<<"\t";
		cin >> x ;
		cout << "Enter second numbers"<<"\t";
		cin >> y;
		for (int i = x + 1; i < y; i++)
		{
			sum += i;
	}
		cout << "The sum of numbers between the given number is" << "\n" << sum;


}