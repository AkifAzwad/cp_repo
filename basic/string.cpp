#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
void print_subs(string input,string output)
{
	if(input.size()==0)
	{
		cout<<output<<endl;
		return;
	}
	print_subs(input.substr(1),output);
	print_subs(input.substr(1),output+input[0]);

}
int main()
{

	string input,output;
	input="cab";
	print_subs(input,output);
	return 0;
}