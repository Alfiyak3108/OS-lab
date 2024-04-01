/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

void findWaitingTime(int processes[],int n,int bt[],int wt[])
{
	wt[0]=0;
	for(int i =1;i<n;i++){
		wt[i]=bt[i-1]+wt[i-1];
	}
}
void findTurnAroundTime(int processes[],int n,int bt[],int wt[],int tat[]){
	for(int i = 0;i<n;i++){
		tat[i]= bt[i]+wt[i];
	}
}
void findAverageTime(int processes[],int n,int bt[])
{
	int wt[n],tat[n],total_wt = 0,total_tat= 0;
	findWaitingTime(processes,n,bt,wt);
	findTurnAroundTime(processes,n,bt,wt,tat);
	
	cout<<"processes"<<"burst time"<<"waiting time"<<"Turn around Time";
	
	for(int i =0;i<n;i++){
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout<<" "<<i+1<<"\t\t"<<bt[i]<<"\t  "<<wt[i]<<"\t\t  "<<tat[i];
		cout<<"\nAverage waiting time ="<<(float)total_wt/(float)n;
        cout<<"\nAverage turn around time = "<<(float)total_tat/(float)n;
		
	}
}



int main(){
	int processes[] = {1,2,3,4};
	int n = sizeof processes/sizeof processes[0];
	
	int burst_time[] = {21,1,6,2};
	findAverageTime(processes,n,burst_time);
	return 0;
}
