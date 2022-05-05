#include <fstream> 
#include <iostream> 
using namespace std; 
bool prime(int x) 
{ 
	if (x <= 1) 
		return false; 
	if (x == 2) 
		return true; 
	// int j=int(sqrt(x)); 
	for (int i = 2; i < x; i++) 
	{ 
		if (x % i == 0) 
			return false; 
	}
	return true; 
}

int main() 
{ 
	int i = 0; 
	cout<<"请输入五个数字:"<<endl; 
	ofstream in("data.dat"); 
	while (i < 5) 
	{ 
		int a; cin >> a; 
		in << a << " "; 
		i++; 
	}
	in.close(); 
	int a[5]; 
	ifstream out("data.dat"); 
	if (!out.is_open()) 
	{ 
		cout << "error opening file"; exit(1); 
	}
	for (int i = 0; i < 5; i++) 
	{ 
		out >> a[i]; 
	}
	for (int i = 0; i < 5; i++) 
	{ 
		if (prime((int)a[i])) 
			cout << a[i] << endl; 
	}
	out.close(); 
	system("pause"); 
	return 0; 
}