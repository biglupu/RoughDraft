#include "matcher.h"

using std::cout;
using std::endl;
using std::string;

Matcher::Matcher(string aKaksi, string aKolme, int aOccurance, int aLineNumb, int aReverseSearch, int aIgnoreCase)
	:mKaksi(aKaksi), mKolme(aKolme), mOccurance(aOccurance), mLineNumb(aLineNumb), mReverseSearch(aReverseSearch), mIgnoreCase(aIgnoreCase) 
{

}