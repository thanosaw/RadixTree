#include "provided.h"
#include "MemberDatabase.h"
#include <string>
#include <istream>
#include <fstream>
#include <iostream>
using namespace std;

MemberDatabase::MemberDatabase()
{

}

MemberDatabase::~MemberDatabase()
{

}

bool MemberDatabase::LoadDatabase(string filename)
{
	// Step 1: Extract name, email, cnt, attvalpair
    ifstream is(filename);

//    if (!is) {
//        cout << "Error loading " << filename << endl;
//        return false;
//    }

    string line;
    int i = 0;
    while (getline(is, line))
    {
        
    }
	// Step 2: Add to a container

	// Step 3: 

	return "name";
}

vector<string> MemberDatabase::FindMatchingMembers(const AttValPair& input) const
{
	vector<string> pair;
	return pair;
}

const PersonProfile* MemberDatabase::GetMemberByEmail(string email) const
{
	PersonProfile* temp = nullptr;
	return temp;
}
