#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std; 
int main()
{ 
    srand((unsigned)time(NULL));
    int a = rand()%20;
    cout<<"Please input an integer number(1~20):" ;
    int num; 
    int flag = 1;
    while(flag)
  {
	 cin>>num;
	 cout<<endl;
	 if(num>a)
	{
	   cout<<"the number you input is bigger.please input an interger number again(1~20):";
	   cout<<endl;
	}
	else if(num<a)
	{
	  cout<<"the number you input is smalller.please input an interger number again(1~20):";
          cout<<endl;
	}
	else
	{
	  cout<<"Congratulate!you guess it!";
	  cout<<endl;
	  flag = 0;
	}
  }
	  return 0;
}
