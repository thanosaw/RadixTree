#include "provided.h"
#include "AttributeTranslator.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

AttributeTranslator::AttributeTranslator()
{

}

AttributeTranslator::~AttributeTranslator()
{

}

bool AttributeTranslator::Load(string filename)
{
	ifstream is(filename);

	if (!is) {
		std::cout << "Error loading " << filename << std::endl;
		return false;
	}

	string line;
	int i = 0;
	while (getline(is, line))
	{
		cout << "Line: " << i << " " << line << endl;
		vector<string> v;
		stringstream ss(line);
		while (ss.good())
		{
			string substr;
			getline(ss, substr, ',');
			v.push_back(substr);
		}

		srcPair.attribute = v[0];
		srcPair.value = v[1];
		compPair.attribute = v[2];
		compPair.value = v[3];
	}

	return true;
}

vector<AttValPair> AttributeTranslator::FindCompatibleAttValPairs(const AttValPair& source) const
{
	vector<AttValPair> pairs;

	pairs.push_back(source);

	return pairs;

}

