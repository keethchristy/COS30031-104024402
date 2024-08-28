#include <iostream>
using namespace std;


void chickennuggies(int chicken, int nuggies) {
	cout << "I have " << chicken << " chicken and " << nuggies << " nuggies";
}

int thisfunctionaltersstuff(int alterme) {
	return alterme + 5;
}

void loopfor20() {
	for (int i = 0; i <= 20; i++) {
		if (i % 2 == 1) {
			cout << i << "  ";
		}
	}
}

void Random1D() {
	int basicarray[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << basicarray[i];
	}
}

void splitwithspaces() {
	string hasspaces = "this has spaces in it";
}




int main() {
	//1A
	chickennuggies(1, 2);
	//1B
	cout << "\n" << thisfunctionaltersstuff(5);
	//
	// 1C: Pointers - ill come back to this
	//
	cout << "\n";
	//1D
	loopfor20();
	cout << "\n";
	//1E
	Random1D();
	//1F
	// 
	// 
	//1G
}


