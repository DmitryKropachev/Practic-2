#include <cstdio>
#include <iostream>

class Road {
public:
	double Length;
	int Width;
};

int main() {
	using namespace std;
	cout << "Test v0.1: OK. \n";
	Road *road;
	road = new Road();
	cout << "Before access: \n";
	cout << "Length: " << road->Length << endl;
	cout << "Width: " << road->Width << endl;
	road->Length = 144.4;
	road->Width = 4;
	cout << "\nAfter access: \n";
	cout << "Length: " << road->Length << endl;
	cout << "Width: " << road->Width << endl;

	return 0;
}
