#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int a[5]; 
	memset(a, 0, sizeof(a)); 
	for (int i = 0; i < 5; i++) 
		cout << a[i] << " "; 
	cout << endl; 

	memset(a, -1, sizeof(a)); 
	for (int i = 0; i < 5; i++) 
		cout << a[i] << " "; 
	cout << endl; 

	memset(a, 5, sizeof(a)); 
	for (int i = 0; i < 5; i++) 
		cout << a[i] << " "; 
} 