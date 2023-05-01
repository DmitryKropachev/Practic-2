#include <iostream>
#include <fstream>

class Road {
public:
	double length;
	int width;
};

int main() {
	using namespace std;
	Road road;

	ifstream fIn;

	cout << "Test v0.1:Ok.\n";
	cout << "Before access: \n";

	road.length = 1500.0;
	road.width = 300.0;

	cout << "Length: " << road.length << endl;
	cout << "Width: " << road.width << endl;

	cout << "\nAfter access: \n";

	fIn.open("C:\\33\\Kropachev\\Practic 2\\Task 3\\length.txt");
	fIn >> road.length;
	fIn.close();

	fIn.open("C:\\33\\Kropachev\\Practic 2\\Task 3\\width.txt");
	fIn >> road.width;
	fIn.close();

	cout << "Length: " << road.length <<endl;
	cout << "Width: " << road.width <<endl;
};
