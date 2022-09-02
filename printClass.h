#pragma once
#include <iostream>
#include <string>

using std::string;

class Documentation {
public:
	Documentation();
	void setParameter(string mYksi, string aParameteri);
	void printEverything(int mArgCee,string mYksi);

private:
	int mArgCee;
	string mYksi;

};