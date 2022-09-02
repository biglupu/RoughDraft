#include "printClass.h"

using std::cout;
using std::endl;
using std::string;

//PLAN: Mieti mites t‰‰ oliohjelmointi taas toimikaan, tee command Centeriin function call joka luo instanssin classille Documentation, ja antaa tietyn printin perustuen argv[1]

Documentation::Documentation()
{
	printEverything(mArgCee,mYksi);
}


void Documentation::setParameter(string mYksi,string aParameteri)
{
	mYksi = aParameteri;
}


void Documentation::printEverything(int mArgCee,string mYksi)
{
	cout << "\nDoCuMENTATION OF BASIC OPERATIONS\n\n";
	cout << mArgCee << mYksi;

}

//Documentation::Documentation(int argCee, string yksi) : mArgCee(argCee), mYksi(yksi)
//{
//
//}
