#include <bits/stdc++.h>
using namespace std;
//northwest corner method
int main()
{
		int arr[100][100];
		int n;
		cout<<"Enter n: ";
		cin>>n;
		int demand[n];
		int supply[n];
		cout<<"\nGenerated cost matrix: \n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				arr[i][j] = rand() % 9 + 1;
				cout<<arr[i][j]<<"  ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			demand[i] = rand() % 250 + 1;
			supply[i] = demand[i];
		}
		shuffle(demand,demand+n,default_random_engine(0));
		cout<<"\nDemands: ";
		for(int i=0;i<n;i++)
		{
			cout<<demand[i]<<" ";
		}
		cout<<endl;
		cout<<"\nSupply: ";
		for(int i=0;i<n;i++)
		{
			cout<<supply[i]<<" ";
		}
		cout<<endl;
		int i=0,j=0,cost=0;
		cout<<endl;
		while(i!=n && j!=n)
		{
			if(demand[i]==supply[j])
			{
				cost+= demand[i]*arr[i][j];
				i++;
				j++;
				demand[i] = 0;
				supply[j] = 0;
			}
			else if(demand[i]<supply[j])	
			{	
				supply[j]-=demand[i];
				cost+= demand[i]*arr[i][j];
				demand[i] = 0;
				i++;
			}
			else if(demand[i]>supply[j])
			{
				
				demand[i]-=supply[j];
				cost+= supply[i]*arr[i][j];
				supply[j]=0;
				j++;
			}
		}

		cost+=demand[n-1]*arr[i-1][j-1];
		demand[n-1] -=supply[n-1];
		supply[n-1] = 0;

		cout<<"Final cost: "<<cost<<endl;
		return 0;
}