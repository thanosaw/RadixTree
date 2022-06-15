#ifndef _MATCHMAKER_H_
#define _MATCHMAKER_H_

#include "provided.h"
#include "MemberDatabase.h"
#include "AttributeTranslator.h"
#include <string>
#include <vector>

using namespace std;

class MatchMaker
{
	public:
		MatchMaker(const MemberDatabase& mdb, const AttributeTranslator& at);
		~MatchMaker();
		vector<EmailCount> IdentifyRankedMatches(string email, int threshold) const;
	private:
};

#endif //_MATCHMAKER_H_
