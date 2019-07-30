// Stock.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include  <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	while (cin >> a)
	{
		if (a==1)cout << a<< endl;
		else{
			vector<int> b = { 3 };
			int c = 3;
			while (b.back() < a)
			{
				b.push_back(b.back() + c);
				c++;
			}
			int sum = 1;
			for (int i = 2; i <= a; i++)
			{
				auto result = find(begin(b), end(b), i);
				if (result == end(b))
				{
					sum++;
				}
				else
				{
					sum--;
				}
			}
			cout << sum << endl;
		}
	}
	return 0;
}

