#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//详见
//https://zhuanlan.zhihu.com/p/31628866
int getMostGold(int num, vector<int> gold, vector<int> people)
{
	vector<int> preResults(num + 1, 0);
	vector<int> results(num + 1 , 0);
	int GoldSize = gold.size();

	//填充边界格子的值
	for (int i = 0; i < num + 1; ++i)
	{
		if (i < people[0]) 
			preResults[i] = 0;
		else
			preResults[i] = gold[0];
	}

	//填充其余格子的值，外层循环是金矿数量，内层循环是工人数
	for (int i = 1; i < GoldSize; ++i)
	{
		for (int j = 0; j < num + 1; ++j)
		{
			if (j < people[i])
			{
				results[j] = preResults[j];
				cout << results[j] << " ";
			}
			else
			{
				//clw note：要想求max，就需要有下标0，比如2金矿5工人的时候，需要对1金矿5工人，和1金矿0工人+2金矿5工人，求max；
				//虽然0工人不存在，但是为了统一格式，这里个人感觉需要额外引入一个下标为0的空间，方便理解和格式统一。
				results[j] = max(preResults[j], preResults[j - people[i]] + gold[i]); 
				cout << results[j] << " ";
			}		
		}
		preResults = results;
		cout << endl;
	}
	return results[num];
}

int main()
{
	vector<int> gold = { 400, 500, 200, 300, 350 };
	vector<int> people = { 5, 5, 3, 4, 3};
	int num = 10;
	cout << getMostGold(num, gold, people) << endl;
	return 0;
}