#include <bits/stdc++.h>
using namespace std;

int random(int a,int b)
{
	if(a>b)
	{
		swap(a,b);
	}
	return a+rand()%(b-a+1);
}



int main(int argc,char* argv[])
{
	srand(atoi(argv[1]));
	int t=100;
	while(t--)
	{
		cout<<random(2,2000)<<"\n";
	}

}