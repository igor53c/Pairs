// Pairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pairs(int, vector<int>);

int main()
{
	vector<int> v1{ 1, 2, 3, 4 };
	cout << pairs(1, v1) << endl;         //3

	vector<int> v2{ 1, 5, 3, 4, 2 };
	cout << pairs(2, v2) << endl;         //3

	return EXIT_SUCCESS;
}

int pairs(int k, vector<int> arr) 
{
	int retValue = 0;

	sort(arr.begin(), arr.end());

	if (k == 0)
		return retValue;

	for (int i = 0; i < arr.size() - 1; i++)
	{
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] - arr[i] == k)
			{
				retValue++;
				
				break;
			}
			
			if (arr[j] - arr[i] > k)
				break;
		}
	}

	return retValue;
}
