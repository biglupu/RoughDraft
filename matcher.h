#pragma once
#include <iostream>
#include <string>

using std::string;

class Matcher {
public:
	Matcher();
	Matcher(string aKaksi, string aKolme, int aOccurance, int aLineNumb, int aReverseSearch, int aIgnoreCase);



private:
	string mKaksi;
	string mKolme;
	int mOccurance;
	int mLineNumb;
	int mReverseSearch;
	int mIgnoreCase;

};