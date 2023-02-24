#include <bits/stdc++.h>
using namespace std;

int main()
{
  //to store the number of processes
  int n;
  cout<<"Name: Astha Varshney/nEnr No: 11901012021/nLab: 4"<<endl;
  cout<<"Enter the number of processes(Maximum 20 allowed): ";
  cin>>n;

  //to store the burst time of all processes
  int bt[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the burst time of process "<<i+1<<":";
    cin>>bt[i];
  }

  //to store waiting time
  int wt[n];
  //waiting time of 1st process is always 0
  wt[0]=0;
  //to calc the average waiting time
  int awt=wt[0];

  for(int i=1;i<n;i++)
  {
    wt[i]=wt[i-1]+bt[i-1];
    awt+=wt[i];
  }
  
  //to store turnaround time
  int tat[n];
  //turnaround time of 1st process = its burst time
  tat[0]=bt[0];
  //to calc the average turnaround time
  int atat=tat[0];

  for(int i=1;i<n;i++)
  {
    tat[i]=tat[i-1]+bt[i];
    atat+=tat[i];
  }

  awt/=n;
  atat/=n;


  cout<<"Output"<<endl;
  cout<<"The average waiting time of the given processes is: "<<awt<<endl;
  cout<<"The average turnaround time of the given processes is: "<<atat<<endl;

  
  cout<<"Process  Burst Time  Waiting Time  Turnaround Time"<<endl;
  for(int i=0;i<n;i++)
   cout<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;

}