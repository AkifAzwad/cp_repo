#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long

vector<int> fun(int n)  
{  
   std::vector<int> v;
    while (n % 2 == 0)  
    {  
        v.push_back(2); 
        n = n/2;  
    }  
  
    for (int i = 3; i*i <= n; i = i + 2)  
    {  
         
        while (n % i == 0)  
        {  
             v.push_back(i); 
            n = n/i;  
        }  
    }  
  
    if (n > 2)  
         v.push_back(n);  
     return v;
}  

int main()
{

	int i,j,t;
	int x,k,temp;
	

	cin>>t;
	while(t--){
	cin>>x>>k;
	 if(x<=k)
	{
		cout<<"0\n";
	}
	else{	
	std::vector<int> v;
	v=fun(x);
	
	if(k<=v.size())
	{
		cout<<"1\n";
	}
	else cout<<"0\n";
	
	}
	}
	return 0;
}