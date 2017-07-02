/*
 * b.cpp
 *
 *  Created on: Jul 2, 2017
 *      Author: Mayur
 */

#include<iostream>
using namespace std;
int main()
{
	int a[100],i,b=0,j,temp,n,max=a[0],result=0;
	cout<<"ENTER NUMBER OF STUDENTS";
	cin>>n;
	cout<<"ENTER MARKS OF STUDENTS ";
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			result=i;
		}
	}
	cout<<"result"<<result;
	cout<<"\n"<<&a[i];
	return(0);
}


