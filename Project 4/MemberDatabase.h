#ifndef _MEMBERDATABSE_H_
#define _MEMBERDATABSE_H_

#include "provided.h"
#include "MemberDatabase.h"
#include "PersonProfile.h"

#include <string>
#include <vector>
using namespace std;

class MemberDatabase
{
	public:
		MemberDatabase();
		~MemberDatabase();
		bool LoadDatabase(string filename);
		vector<string> FindMatchingMembers(const AttValPair& input) const;
		const PersonProfile* GetMemberByEmail(string email) const;
	private:
		string member_name;
		string member_email;
		int member_attribute_cnt;
		vector<AttValPair> member_attvalpair;
};

#endif //_MEMBERDATABSE_H_
