#include "commandCenter.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


void doingStuff()
{


	Documentation test;
	test.printEverything();

	/*zeroArgumentRun();*/

}


void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	cout << "\nCommand line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << ", \"" << kolme << "\"" << endl << endl;

	if (yksi[0] == '-' && yksi[1] == 'o')
		IVargumentRun(argCee, yksi, kaksi, kolme);
	else
		cout << "ERROR\nYou must specify the desired run option. \nFor example use \"-olo\" for Occurances and Line number. \nUse \"help\" or \"options\" commands to see the documentation" << endl;

}

//Tee instanssi luokasta "Documentation" joka printtaa halutut tekstit. While-loop, "exit" -out. 
void doingStuff(int argCee, string yksi)
{
	Documentation test;
	test.printEverything();

}



void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << endl;
	basicRun(argCee, yksi, kaksi);


}

