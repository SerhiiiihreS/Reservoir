#include "Reservoir.h"
#include<iostream>
using namespace std;

int main() {
	Reservoir s(23, 34, 12);
	Reservoir d(12, 89, 4);
	s.volume();
	cout << endl;
	s.square();
	cout << endl;
	d.type();
}