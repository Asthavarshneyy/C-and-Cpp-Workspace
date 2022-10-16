#include <iostream>
using namespace std;

struct Stream{

	int top_index = -1;
    //int max=10;
	char a[10];

	void reset(){
        for(int i=0;i<=9;i++){
         a[i]='\0';
        }
         top_index=-1;
    }

	bool empty(){
        if(a[0]=='\0') return true;
        else return false;       
	}

	bool push(char c){
        
        if(a[top_index]=='\0' && top_index==9) return false;
        else{              
        top_index++;
        a[top_index]=c;
        a[top_index+1]='\0';
         return true;
        }
       
       
        
	}

	char pop() {
        if(a[0]=='\0') return '\0';
        else if(top_index==0){
            char rem;
            rem=a[0];
            a[0]='\0';
            top_index--;
            return rem;
        }
        else{
            char rem;
            rem=a[top_index-1];
            a[top_index-1]=a[top_index];
            top_index--;
            return rem;
            
        }
	}

	char top() {
        if(a[0]=='\0') return '\0';
        else return a[top_index];
   	
	}

	void printStream(){
        for(int i=0;i<=top_index;i++){
       std::cout<<a[i]<<" ";
        }
        std::cout<<std::endl;
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
}
