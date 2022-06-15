#include "provided.h"
#include "MemberDatabase.h"
#include "MatchMaker.h"
#include "AttributeTranslator.h"
#include <string>

using namespace std;

MatchMaker::MatchMaker(const MemberDatabase& mdb, const AttributeTranslator& at)
{

}

MatchMaker::~MatchMaker()
{

}

vector<EmailCount> MatchMaker::IdentifyRankedMatches(string email, int threshold) const
{
	vector<EmailCount> count;
	return count;
}

