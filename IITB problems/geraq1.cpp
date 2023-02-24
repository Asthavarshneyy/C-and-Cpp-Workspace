#include<iostream>
using namespace std;

void repeat(int n)
{
        double account1, account2, amount, amounta, amountb, amountc;
        cin >> account1 >> account2 >> amount;
        if (account1=='A' && account2=='B' && amount<=amounta)
        {
          amounta =amounta - amount;
          amountb = amountb + amount;
          cout<<"valid";
        }
        if (account1=='A' && account2=='B' && amount>amounta)
            cout<<"Invalid";

        if (account1=='A' && account2=='C' && amount<=amounta)
        {
          amounta =amounta - amount;
          amountc = amountc + amount;
          cout << "Valid";
        }
        if (account1=='A' && account2=='C' && amount>amounta)
            cout << "Invalid";

        if (account1=='B' && account2=='A' && amount<=amountb)
            amountb =amountb - amount;
            amounta = amounta + amount;
            cout << "Valid";
        if (account1=='B' && account2=='A' && amount>amountb)
            cout << "Invalid";

        if (account1=='B' && account2=='C' && amount<=amountb)
            amountb =amountb - amount;
            amountc = amountc + amount;
            cout << "Valid";
        if (account1=='B' && account2=='C' && amount>amountb)
            cout << "Invalid";

        if (account1=='C' && account2=='B' && amount<=amountc)
            amountc =amountc - amount;
            amountb = amountb + amount;
            cout << "Valid";
        if (account1=='C' && account2=='B' && amount>amountc)
            cout << "Invalid";

        if (account1=='C' && account2=='A' && amount<=amountc)
            amountc =amountc - amount;
            amounta = amounta + amount;
            cout << "Valid";
        if (account1=='C' && account2=='A' && amount>amountc)
            cout << "Invalid";

    }

int main()
{
    int A,B,C,amounta,amountb,amountc,n,amount;
    char account1,account2;
    cin >> amounta >> amountb >> amountc;
    cin >> n;
    cout<<"ssd";
}


    cout << "A " << amounta << endl << "B " << amountb << endl << "C " << amountc;


}



vector <pair<int,int>> checkrev(int x1,int x2,int x3,int x4,int x5,int y1,int y2,int y3,int y4,int y5)
{
  int n=1;
  vector <pair<int,int>> ans;
  for(int i=1,j=1;i<=8,j<=8;i++,j++)
  {
    while(i+n<=8 && j+n<=8 && i-n>=1 && j-n>=1)
    {
      if((i+n=x1 && j+n=y1) ||(i+n=x2 && j+n=y2)||(i+n=x3 && j+n=y3)||(i+n=x4 && j+n=y4)||(i+n=x5 && j+n=y5)||(i-n=x1 && j-n=y1)||(i-n=x2 && j-n=y2)||(i-n=x3 && j-n=y3)||(i-n=x4 && j-n=y4)||(i-n=x5 && j-n=y5)||(i+n=x1 && j-n=y1)||(i+n=x2 && j-n=y2)||(i+n=x3 && j-n=y3)||(i+n=x4 && j-n=y4)||(i+n=x5 && j-n=y5)||(i-n=x1 && j+n=y1)||(i-n=x2 && j+n=y2)||(i-n=x3 && j+n=y3)||(i-n=x4 && j+n=y4)||(i-n=x5 && j+n=y5) )
      continue;
      else
      {
       ans.push(i,j);
      }
    }
  }
  return ans;
}