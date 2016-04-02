#include<iostream>
#include<string>
using namespace std;
int main()
{
	//#01990057#01240075 150 LT
	string input;
	getline(cin,input);
	string ma=input.substr(1,input.find_first_of(' ')-1);
	input.erase(0,input.find_first_of(' ')+1);
	int value=stoi(input.substr(0,input.find_first_of(' ')));
	input.erase(0,input.find_first_of(' ')+1);
	string comparator=input.substr(0,2);
	string matrix[100][100];
	int row=0,column=0;
	int cur=0;
	while(!ma.empty())
	{
		matrix[row][column]=ma.substr(0,4);
		column++;
		ma.erase(0,4);
		if(ma[0]=='#')
		{
			row++;
			column=0;
			ma.erase(0,1);
		}
	}
	column--;
	cout<<endl<<"Matrix"<<endl;
	for(int i=0;i<=row;i++)
	{
		cout<<"\t";
		for(int j=0;j<=column;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<comparator<<" "<<value<<endl;
	for(int i=0;i<=row;i++)
	{
		cout<<"\t";
		for(int j=0;j<=column;j++)
		{
			if(comparator=="LT")
				cout<<(stoi(matrix[i][j])<value)<<" ";
			else if(comparator=="GT")
				cout<<(stoi(matrix[i][j])>value)<<" ";
			else
				cout<<(stoi(matrix[i][j])==value)<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}