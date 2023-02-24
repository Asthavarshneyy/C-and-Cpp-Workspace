#include <bits/stdc++.h>
using namespace std;

struct my_clock
{
  int hr=0;
  int min=0;

  void setTime(unsigned int h, unsigned int m)
  {
    if(h>=0 && h<=23)
      hr=h;
    if(m>=0 && m<=59)
      min=m;
  }

  void nextMinute()
  {
    if(min==59)
    {
      if(hr==23)
        hr=0;
      else
       hr++;
      min=0;
    }
    else
     min++;
  }

  void nextHour()
  {
    if(hr==23)
     hr=0;
    else
     hr++;
  }

  void prevMinute()
  {
    if(min==0)
    {
      if(hr==0)
       hr=23;
      else 
       hr--;
      min=59;
    }
    else
     min--;
  }

  void addTime(unsigned int h, unsigned int m)
  {
    hr+=h;
    if(hr>23)
    {
      int extra=hr-24;
      hr=extra;
    }
    min+=m;
    if(min>59)
    {
      int extra=min-60;
      min=extra;
      if(hr==23)
       hr=0;
      else
       hr++;
    }
  }

  void currentTime(int format)
  {
    if(format==1)
    {
      if(hr==0)
      {
        cout<<"12:";
        if(min<=9)
         cout<<"0"<<min<<" AM"<<endl;
        else
         cout<<min<<" AM"<<endl; 
      }
      else if(hr<12)
      {
        if(hr<=9)
         cout<<"0"<<hr<<":";
        else
         cout<<hr<<":";
        if(min<=9)
         cout<<"0"<<min<<" AM"<<endl;
        else
         cout<<min<<" AM"<<endl;  
      }
      else if(hr==12)
      {
        cout<<hr<<":";
         if(min<=9)
         cout<<"0"<<min<<" PM"<<endl;
        else
         cout<<min<<" PM"<<endl;
      }

      else if(hr>12)
      {
        hr-=12;
        if(hr<=9)
         cout<<"0"<<hr<<":";
        else
         cout<<hr<<":";
        if(min<=9)
         cout<<"0"<<min<<" PM"<<endl;
        else
         cout<<min<<" PM"<<endl;
      }
      
    }
    else if(format==2)
    {
       if(hr<=9)
         cout<<"0"<<hr<<":";
        else
         cout<<hr<<":";
        if(min<=9)
         cout<<"0"<<min<<endl;
        else
         cout<<min<<endl;
    }
  }

};
int main()
{

    char query;
    unsigned int x,y,num;

    struct my_clock clock;

    while (1)
    {
        cin >> query;

        if (query == '1'){
            cin >> x >> y;
            clock.setTime(x,y);
        }
        else if (query == '2')
        {
            clock.nextMinute();
        }
        else if (query == '3')
        {
            clock.nextHour();
        }
        else if (query == '4'){
            clock.prevMinute();
        }
        else if (query == '5'){
            cin >> x >> y;
            clock.addTime(x,y);
        }
        else if (query == '6'){
            cin >> num;
            clock.currentTime(num);
        }
        else if (query == '7')
        {
            break;
        }
    }

    return 0;
}

/*struct Stream
{
  char a[10];
  int r;

  void reset()
  {
    a[0]='\0';
    r=-1;
  }

  bool empty()
  {
    if(a[0]=='\0')
     return true;
    else 
     return false;
  }

  bool push(char c)
  {
    if(r==9)
     return false;
    else
    {
      r++;
      a[r]=c;
      a[r+1]='\0';
      return true;
    }
  }

  char pop()
  {
    if(r==-1)
     return '\0';
    if(r==0)
    {
      char c=a[r];
      a[r]='\0';
      r--;
      return c;
    }
    char c=a[r];
    a[r-1]=a[r];
    a[r]='\0';
    r--;
    return c;
  }

  char top()
  {
    if(r!=-1)
     return a[r];
    else
     return '\0';
  }

  void printStream()
  {
    int i=0;
    while(i<=r)
    {
      cout<<a[i]<<" ";
      i++;
    }
  }
};
int main()
{
    struct Stream s;

    char query;
    char value;

    while (1)
    {
        cin >> query;
        if (query == 'X')
            break;

        else if (query == 'R')
        {
            s.reset();
        }
        else if (query == 'A')
        {
            cin >> value;
            cout << s.push(value) << endl;
        }
        else if (query == 'P'){
            value = s.pop();
            if (value == '\0')
            {
                cout << "Empty Stack" << endl;
            }
            else
            {
                cout << value << endl;
            }
            // cout << s.pop() << endl;
        }
        else if (query == 'T'){
            cout << s.top() << endl;
        }
        else if (query == 'D'){
            s.printStream();
        }
    }

    return 0;
}*/

/*struct Line
{
  //public:
  double x1,y1,x2,y2;

  //Line(double x1, double y1, double x2, double y2): x1(x1), y1(y1), x2(x2), y2(y2){};

  void initializeTo(double x1, double y1, double x2, double y2)
  {
    this->x1=x1;
    this->y1=y1;
    this->x2=x2;
    this->y2=y2;
  }

  double calculateSlope()
  {
    double slope=(y2-y1)/(x2-x1);
    return slope;
  }

  double distanceFrom(double x, double y)
  {
    double num= (y2-y1) * (x-x1)-(y-y1) * (x2-x1);
    num=abs(num);
    double den=sqrt(pow((y2-y1),2) + pow((x1-x2),2));
    double distance=num/den;
    return distance;
  }

  bool isOnLine(double x, double y)
  {
    int ans=(y2-y1) * (x-x1)-(y-y1) * (x2-x1);
    if(ans==0)
     return true;
    else
     return false;
  }
  bool parallelTo(double x1, double y1, double x2, double y2)
  {
    double m1=calculateSlope();
    double m2=(y2-y1)/(x2-x1);
    if(m1==m2)
     return true;
    else 
     return false;
  }
};*/

/*int main()
{
  int m,n,k;
  cin>>m>>n>>k;
  char a[m][n];

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      a[i][j]='0';
    }
  }

  for(int i=1;i<=k;i++)
  {
    int x,y;
    cin>>x>>y;
    a[x-1][y-1]='M';
  }

  

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      int count=0;
      if(a[i][j]!='M')
      {
        if(i>=0 && i<m && (j-1)>=0 && (j-1)<n && (a[i][j-1]=='M'))
         count++;
        if(i>=0 && i<m && (j+1)>=0 && (j+1)<n && (a[i][j+1]=='M'))
         count++;
        if((i-1)>=0 && (i-1)<m && j>=0 && j<n && (a[i-1][j]=='M'))
         count++;
        if((i+1)>=0 && (i+1)<m && j>=0 && j<n && (a[i+1][j]=='M'))
         count++;
        if((i-1)>=0 && (i-1)<m && (j-1)>=0 && (j-1)<n && (a[i-1][j-1]=='M'))
         count++;
        if((i-1)>=0 && (i-1)<m && (j+1)>=0 && (j+1)<n && (a[i-1][j+1]=='M'))
          count++;
        if((i+1)>=0 && (i+1)<m && (j-1)>=0 && (j-1)<n && (a[i+1][j-1]=='M'))
         count++;
        if((i+1)>=0 && (i+1)<m && (j+1)>=0 && (j+1)<n && (a[i+1][j+1]=='M'))
         count++;
      }
      char c='0'+count;
      if(a[i][j]!='M')
       a[i][j]=c;
    }
  }

for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

}*/

/*int main()
{
  int N;
  cin>>N;
  char a[N][N];
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      a[i][j]='0';
    }
  }
  string str;
  for(int i=1;i<=N;i++)
  {
    cin>>str;
    for(int j=1;j<str.length();j++)
    {
      int k=int(str[j])-int('0');
      a[i-1][k-1]='2';
    }
  }
  
  
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      if(a[i][j]=='2')
      {
        if(a[i][j]=='2' && a[j][i]=='2')
        {
          a[i][j]='1';
          a[j][i]='1';
        }
        else
        {
           a[i][j]='0';
           a[j][i]='0';
        }
      }
    }
  }

  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}*/

/*int main()
{
  int N;
  cin>>N;
  char arr[N][N];

  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      arr[i][j]='0';
    }
  }

  for(int i=1;i<=N;i++)
  {
    char num[100];
    cin>>num;
    for(auto j:num)
    {
      arr[i-1][j-1]='2';
    }

  }

 for(int i=0;i<N;i++)
  {
    arr[i][i]='0';
  }

  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
cout<<endl;

  for(int i=0;i<N;i++)
  {
    for(int j=0;j<N;j++)
    {
      if(arr[i][j]=='1' || arr[i][j]=='0')
      {
        cout<<arr[i][j]<<" ";
        continue;
      }
      else if(arr[i][j]=='2'&& arr[j][i]=='2')
      {
        arr[i][j]='1';
        arr[j][i]='1';
      }
      else
       arr[i][j]='0';
        arr[j][i]='0';
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}*/

// int main()
// {
//   int N1;
//   cin>>N1;
//   char a[N1];
//   cin>>a;
//   int N2;
//   cin>>N2;
//   char b[N2];
//   cin>>b;
//   int i=0;
//   for(auto x: b)
//   {
//     if(a[i]==x)
//      i++;
//     else
//      i=0;
//     if(i==N1)
//      {
//        cout<<1<<endl;
//        break;
//      }
//   }
//   if(i!=N1)
//    cout<<0<<endl;
// }

/*int main()
{
  int k;
  cin>>k;
  int N;
  cin>>N;
  int A[N];
  for(int k=0;k<N;k++)
    cin>>A[k];
  double B[N];
  int i=0;
  for(i=0;i<N;i++)
  {
    double sum=0,count=0.0;
    for(int j=max(0,i-k);j<=min(N,i+k);j++)
    {
      if(j==N)
       break;
      sum+=A[j];
      count+=1.0;
    }
    double avg=sum/count;
    B[i]=avg;
  }

 
  for(int i=0;i<N;i++)
  {
    cout<<fixed;
    cout.precision(2);   
    cout<<B[i]<<" ";
  }
}*/

/*int main()
{
  
  int N;
  cin>>N;
  int A[N];
  for(int k=0;k<N;k++)
    cin>>A[k];
  vector <int> B;
  vector <int> C;
  int i=0;
  for(i=0;i<N;i++)
  {
    if(A[i]<0)
      B.push_back(A[i]);
    else
      C.push_back(A[i]);
  }
  for(i=0;i<C.size();i++)
   B.push_back(C[i]);

  for(i=0;i<B.size();i++)
   cout<<B[i]<<" ";
}*/

/*int main()
{
  int N;
  cin>>N;
  int A[N];
  for(int k=0;k<N;k++)
    cin>>A[k];
  int i,j,min,temp;
  for(i=0;i<N-1;i++)
  {
    min=i;
    for(j=i+1;j<N;j++)
    {
      if(A[min]>A[j])
        min=j;
    }
    temp=A[min];
    A[min]=A[i];
    A[i]=temp;
  }
  
  min=A[0];
  int MEX=-1;
  for(i=0;i<N;i++)
  {
    if(min!=A[i])
    {
      MEX=min;
      break;
    }
    min++;
    //cout<< min<< " ";
  }
  if(MEX==-1)
   MEX=min;
  cout<<MEX;
}*/
