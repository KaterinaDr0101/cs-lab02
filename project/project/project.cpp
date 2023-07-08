#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	cout << "Enter A and B: ";
	int A, B;
	cin >> A >> B;
	cout << "A + B = " << A + B << '\n'
		<< "A - B = " << A - B << '\n'
		<< "A * B = " << A * B << '\n'
		<< "A / B = " << A / B << '\n'
		<<"Max: " << max(A, B);

}
