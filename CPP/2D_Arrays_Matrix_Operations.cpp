#include<iostream>

using namespace std;

int main()
{
	
	int x[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int y[3][3] = {{5,8,0},{2,1,3},{1,0,0}};
	
	cout<<"---------X----------"<<endl; 
	
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"["<<i+1<<"]"<<"["<<j+1<<"] :"<<x[i][j]<<endl;
			
		}
		
	}
	
	cout<<"---------Y----------"<<endl; 
	
		for (int i=0;i<3;i++) //writing as [0][1] = something
	{
		for(int j=0;j<3;j++)
		{
			cout<<"["<<i+1<<"]"<<"["<<j+1<<"] :"<<y[i][j]<<endl;
			
		}
		
	}
	
	cout<<"---------MATRIX----------"<<endl;
	
	
		for (int i=0;i<3;i++)  //writing as matrix
	{
		for(int j=0;j<3;j++)
		{
			cout<<x[i][j]<<" ";
			
		}
		cout<<endl;
		
	}
	
	cout<<endl;
		for (int i=0;i<3;i++)  //writing as matrix
	{
		for(int j=0;j<3;j++)
		{
			cout<<y[i][j]<<" ";
			
		}
		cout<<endl;
		
	}
	
	
	cout<<"---------TRANSPOSE OF Y----------"<<endl; 
	
	int transpose[3][3];  
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			transpose[j][i] = y[i][j];  //Creating of transpose of Y
			
		}
		
	}
	
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<transpose[i][j]<<" ";   //Displaying of transpose of Y
		}
		cout<<endl;
	}
	
	cout<<"---------MULTIPLICATION X AND Y----------"<<endl; 
	
	int multiplication[3][3]={0}; //Creating 3x3 zero matrix
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			for (int k=0;k<3;k++)
			{
				multiplication[i][k] += x[i][j]*transpose[k][j];
			}
		}
	}             
	
	


	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
		cout<<multiplication[i][j]<<" "; 
		
		
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	

	
}
