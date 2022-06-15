#ifndef _ATTRIBUTETRANSLATOR_H_
#define _ATTRIBUTETRANSLATOR_H_

#include "provided.h"
#include <string>
#include <vector>

using namespace std;

class AttributeTranslator
{
	public:
		AttributeTranslator();
		~AttributeTranslator();
		bool Load(string filename);
		vector<AttValPair> FindCompatibleAttValPairs(const AttValPair& source) const;
	private:
		AttValPair srcPair;
		AttValPair compPair;
};

#endif //_ATTRIBUTETRANSLATOR_H_
