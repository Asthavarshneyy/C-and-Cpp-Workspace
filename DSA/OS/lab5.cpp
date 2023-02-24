#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.second<p2.second;
}
int main()
{
  //to store the number of processes
  int n;
  cout<<"Name: Astha Varshney/nEnr No: 11901012021/nLab: 5"<<endl;
  cout<<"Enter the number of processes(Maximum 20 allowed): ";
  cin>>n;

  //to store the burst time of all processes
  // map<int, int> mp;
  // for(int i=0;i<n;i++)
  // {
  //    int key;
  //    cout<<"Enter the burst time of process "<<i+1<<": ";
  //    cin>>key;
  //    mp[key]=i;
  // }
  pair<int, int> bt[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the burst time of process "<<i+1<<": ";
    int key;
    cin>>key;
    bt[i]=make_pair(i, key);
  }

  //sorting
  sort(bt, bt+n, compare);

  //to store waiting time
  int wt[n];
  //waiting time of 1st process is always 0
  wt[bt[0].first]=0;
  //to calc the average waiting time
  int awt=wt[bt[0].first];
  int temp=wt[bt[0].first];
  for(int i=1;i<n;i++)
  {
    auto x=bt[i];
    wt[x.first]=temp+bt[i-1].second;
    temp=wt[x.first];
    awt+=temp;
  }
  
  //to store turnaround time
  int tat[n];
  //turnaround time of 1st process = its burst time
  tat[bt[0].first]=bt[0].second;
  //to calc the average turnaround time
  int atat=tat[bt[0].first];
  temp=tat[bt[0].first];
  for(int i=1;i<n;i++)
  {
    auto x=bt[i];
    tat[x.first]=temp+x.second;
    temp=tat[x.first];
    atat+=temp;
  }

  awt/=n;
  atat/=n;


  cout<<"Output"<<endl;
  cout<<"The average waiting time of the given processes is: "<<awt<<endl;
  cout<<"The average turnaround time of the given processes is: "<<atat<<endl;

  
  cout<<"Process  Burst Time  Waiting Time  Turnaround Time"<<endl;
  for(int i=0;i<n;i++)
   cout<<bt[i].first+1<<"\t\t"<<bt[i].second<<"\t\t"<<wt[bt[i].first]<<"\t\t"<<tat[bt[i].first]<<endl;

}