#include<iostream>
using namespace std;
void add()
  {
	  int a,b,sum;
	  cout<<"\n Inside void add();\n";
	  cout<<" \n Enter the values  ";
	  cin>>a>>b;
	  sum = a+b;
	  cout<<"\n sum = "<<sum<<"\n";
  }
int add(int a, int b)
 {
	 int sum;
	 sum = a+b;
	 cout<<"\nInside int add(inta,intb);\n";
         return sum;
 }

int main()
{
	int val1, val2,result;
	cout<<"\n In main()\n"<<"Enter the values ";
	cin>>val1>>val2;
	result = add(val1,val2);
        cout<<"\n Result from integer return function = "<<result<<"\n";
	add();
	return 0;
}


         

