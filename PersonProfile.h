#ifndef _PERSONPROFILE_H_
#define _PERSONPROFILE_H_

#include "provided.h"
#include "RadixTree.h"
#include <string>
#include <vector>
using namespace std;

class PersonProfile
{
	public:
		PersonProfile(string name, string email);
		~PersonProfile();
		string GetName() const;
		string GetEmail() const;
		void AddAttValPair(const AttValPair& attval);
		int GetNumAttValPairs() const;
		bool GetAttVal(int attribute_num, AttValPair& attval) const;
	private:
		string my_name;
		string my_email;
    int m_size;
		int numAtrribute;
		vector<AttValPair> attList;
    RadixTree<vector<string>> m_trie;
};

#endif //_PERSONPROFILE_H_
