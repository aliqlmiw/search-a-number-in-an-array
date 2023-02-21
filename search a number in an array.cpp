/********************ALI GHOLAMI*******************/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[10][10],number,temp=-1;
	cout<<"please enter number:"<<endl;
	for(int i=0;i<=9;i++)
	{
		for (int j=0;j<=9;j++)
		{
			
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
	cout<<"please enter number for search:"<<endl;
	cin>>number;
	for (int j=0;j<=9;j++)
	{
		for (int i=0;i<=9;i++)
		{
			if (a[i][j]==number)
			{
				temp=i;
			}
		}	
		
	}
		if (temp==-1)
			{
				cout<<"nember not found!"<<endl;
			}
			else
			{
				cout<<"nember found!"<<endl;
			}
			getch();
			return 0;
}