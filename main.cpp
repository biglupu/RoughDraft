#include <iostream>
#include "commandCenter.h"
#include <string>

using namespace std;



int main(int argc, char** argv) {


	try {
		if (argc > 4) {
			throw argc;
		}
	}
	catch (int x) {
		cout << "\nToo many arguments(" << x << "), seizing operations";
		return 0;
	}


	if (argc == 1)
		doingStuff();
	else if (argc == 2)
		doingStuff(argc, argv[1]);
	else if (argc == 3)
		doingStuff(argc, argv[1], argv[2]);
	else if (argc == 4)
		doingStuff(argc, argv[1], argv[2], argv[3]);





	return 0;
}



