#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//详见
//https://zhuanlan.zhihu.com/p/31628866
//我的方案，第一种写法：下标0到num-1，这样用下标0代表1个工人，写起来多几行代码。
int getMostGold(int num, vector<int> gold, vector<int> people)
{
	vector<int> preResults(num, 0);
	vector<int> results(num, 0);
	int GoldSize = gold.size();

	//填充边界格子的值
	for (int i = 0; i < num; ++i)
	{
		if (i < people[0] - 1)  //比如people[0]=5，i=4代表5个人的时候，因此这时候应该进else
			preResults[i] = 0;
		else
			preResults[i] = gold[0];
	}

	//填充其余格子的值，外层循环是金矿数量，内层循环是工人数
	for (int i = 1; i < GoldSize; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			if (j < people[i] - 1)
			{
				results[j] = preResults[j];
				cout << results[j] << " ";
			}
			else
			{
				//clw note：要想求max，就需要有下标0，比如2金矿5工人的时候，需要对1金矿5工人，和1金矿0工人+2金矿5工人，求max；
				//虽然0工人不存在，但是为了统一格式，这里个人感觉需要额外引入一个下标为0的空间，方便理解和格式统一。
				//或者就按照下面的写法也行。。。
				if (j - people[i] < 0)
				{
					results[j] = max(preResults[j], gold[i]);
					cout << results[j] << " ";
				}		
				else
				{
					results[j] = max(preResults[j], preResults[j - people[i]] + gold[i]);
					cout << results[j] << " ";
				}
			}
		}
		preResults = results;
		cout << endl;
	}
	return results[num - 1];
}

//我的方案，第二种写法：下标0到num，额外多一个0工人的空间，这样方便下标表示，用1代表1个工人
int getMostGold2(int num, vector<int> gold, vector<int> people)
{
	vector<int> preResults(num + 1, 0);
	vector<int> results(num + 1, 0);
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
	vector<int> people = { 5, 5, 3, 4, 3 };
	int num = 10;  //假设用10个工人
	cout << "max gold is: " << getMostGold(num, gold, people) << endl;
	cout << "max gold is: " << getMostGold2(num, gold, people) << endl;
	return 0;
}
