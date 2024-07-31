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


int main() {
	//1A
	chickennuggies(1, 2);
	//1B
	cout << "\n" << thisfunctionaltersstuff(5);
	//
	// 1C: Pointers - DO LATER, CANT BE ASSED
	//
	cout << "\n";
	//1D
	loopfor20();
	//1E

}


