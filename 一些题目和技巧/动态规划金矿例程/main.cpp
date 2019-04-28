#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//���
//https://zhuanlan.zhihu.com/p/31628866
int getMostGold(int num, vector<int> gold, vector<int> people)
{
	vector<int> preResults(num + 1, 0);
	vector<int> results(num + 1 , 0);
	int GoldSize = gold.size();

	//���߽���ӵ�ֵ
	for (int i = 0; i < num + 1; ++i)
	{
		if (i < people[0]) 
			preResults[i] = 0;
		else
			preResults[i] = gold[0];
	}

	//���������ӵ�ֵ�����ѭ���ǽ���������ڲ�ѭ���ǹ�����
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
				//clw note��Ҫ����max������Ҫ���±�0������2���5���˵�ʱ����Ҫ��1���5���ˣ���1���0����+2���5���ˣ���max��
				//��Ȼ0���˲����ڣ�����Ϊ��ͳһ��ʽ��������˸о���Ҫ��������һ���±�Ϊ0�Ŀռ䣬�������͸�ʽͳһ��
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