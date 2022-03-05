// C++ program for Babylonian
// method for square root
// Doesn't work for numbers which are not perfect square
//method can be derived from Newton–Raphson method
#include <iostream>
using namespace std;

class sol 
{
public:
	float squareRoot(float n)
	{
		
		float x = n;
		float y = 1;

		while (x > y) {
			x = (x + y) / 2;
			y = n / x;
		}
		return x;
	}
};


int main()
{
	sol s;
	int n = 49;
	cout << "Square root of " << n << " is " << s.squareRoot(n);
	getchar();
}


