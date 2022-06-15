

#include "provided.h"
#include "PersonProfile.h"
#include <string>

using namespace std;

PersonProfile::PersonProfile(string name, string email)
{
	my_name = name;
	my_email = email;
}

PersonProfile::~PersonProfile()
{

}

string PersonProfile::GetName() const
{
	return my_name;
}

string PersonProfile::GetEmail() const
{
	return my_email;
}

void PersonProfile::AddAttValPair(const AttValPair& attval)
{
//    vector<string>* values = 
	
}

int PersonProfile::GetNumAttValPairs() const
{
	return numAtrribute;
}

bool PersonProfile::GetAttVal(int attribute_num, AttValPair& attval) const
{
	attval = attList[attribute_num];
	return true;
}

