// ProgFest word index problem

#include <iostream>
#include <string>

using namespace std;

string words[83682];

int main()
{
	int count = 0;
	int i, j, k, l, m;

	for (i = 0; i < 26; i++)
	{
		count++;
		words[count] += char('a' + i);
	}

	for (i = 0; i < 26; i++)
		for (j = i + 1; j < 26; j++)
		{
			count++;
			words[count] += char('a' + i);
			words[count] +=	char('a' + j);
		}

	for (i = 0; i < 26; i++)
		for (j = i + 1; j < 26; j++)
			for (k = j + 1; k < 26; k++)
			{
				count++;
				words[count] += char('a' + i);
				words[count] +=	char('a' + j);
				words[count] +=	char('a' + k);
			}

	for (i = 0; i < 26; i++)
		for (j = i + 1; j < 26; j++)
			for (k = j + 1; k < 26; k++)
				for (l = k + 1; l < 26; l++)
				{
					count++;
					words[count] += char('a' + i);
					words[count] +=	char('a' + j);
					words[count] +=	char('a' + k);
					words[count] +=	char('a' + l);
				}

	for (i = 0; i < 26; i++)
		for (j = i + 1; j < 26; j++)
			for (k = j + 1; k < 26; k++)
				for (l = k + 1; l < 26; l++)
					for (m = l + 1; m < 26; m++)
					{
						count++;
						words[count] += char('a' + i);
						words[count] +=	char('a' + j);
						words[count] +=	char('a' + k);
						words[count] +=	char('a' + l);
						words[count] +=	char('a' + m);
					}

	cout << "count: " << count << endl;
	cout << "51: " << words[51] << endl;
	cout << "83681: " << words[83681] << endl;

	cout << "Enter a string: ";
	string str;
	cin >> str;

	for (i = 0; i < 83682; i++)
	{
		if (str == words[i])
		{
			cout << i << endl;
			break;
		}
	}

	return 0;
}
