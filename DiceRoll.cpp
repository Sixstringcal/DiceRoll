#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int b;
	cout<<"How many die/dice should we roll for you?";
	cin>>b;
	for(int c=0;c<b;c++)
	{
	srand(time(0));
	int i=0;
	int a[6];
	while(i<6)
	{
		a[i]=rand()%6;
		i++;
	}
	int p = random()%5;
	cout<<a[p]<<endl;
	}
  return 0;
}

