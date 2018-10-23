#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// from ex 10.9
void elimdups(std::vector<std::string> &strVec)
{
	sort(strVec.begin(), strVec.end());
	auto end_unique = unique(strVec.begin(), strVec.end());
	strVec.erase(end_unique, strVec.end());
}

void biggies(vector<string> &vs, size_t sz)
{
	elimdups(vs);

	// sort by size, but maintain alphabetical order for same size.
	stable_sort(vs.begin(), vs.end(), [](string const& lhs, string const& rhs) { return lhs.size() < rhs.size(); });

	// get an iterator to the first one whose size() is >= sz
	auto wc = find_if(vs.begin(), vs.end(), [sz](string const& s) { return s.size() >= sz; });

	// print the biggies
	for_each(wc, vs.end(), [](const string &s) { cout << s << " "; });
}


//clw note 20180908：主要功能：打印长度大于等于给定值的单词，按字典序排序并删除重复单词
int main()
{
	vector<string> v = {"aaaa","dddd","aaaa","ccc", "aaa", "bbb", "ddd","bbbb"};
	biggies(v, 4);
	return 0;
}