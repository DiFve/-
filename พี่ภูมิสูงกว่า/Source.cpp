#include<iostream>
#include<string>
using namespace std;

struct gg
{
	double height;
	string name;
};
gg input[5], temp;

void sortStruct()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (input[j + 1].height > input[j].height)
			{
				temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
}

int main()
{


	for (int i = 0; i < 5; i++)	getline(cin, input[i].name);
	for (int i = 0; i < 5; i++)	cin >> input[i].height;
	sortStruct();
	for (int i = 0; i < 5; i++)
	{
		cout << input[i].name;
		cout << " : ";
		printf("%.2lf", input[i].height);
		cout << endl;
	}
	return 0;
}