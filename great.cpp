#include <iostream>
using namespace std;
int main()
{
	int num=1,qnum,it,that,thia,a,b,ta,ty;
	cin>>qnum;
	int pic[qnum][qnum];
	for(thia=0;thia<=qnum-1;thia++)
	{
	for(that=thia;that<qnum-thia;that++)
	{pic[that][qnum-thia-1]=num++;}
	for(it=1+thia;it<qnum-thia;it++)
	{pic[qnum-thia-1][qnum-1-it]=num++;}
	for(ta=1+thia;ta<qnum-thia-thia;ta++)
	{pic[qnum-thia-1-ta][thia]=num++;}
	for(ty=1;ty<qnum-thia-1;ty++)
	{pic[thia][ty]=num++;}
}
for(a=0;a<qnum;a++)
{
	for(b=0;b<qnum;b++)
	{
	cout<<pic[a][b]<<" ";}
	cout<<endl;
}
return 0;
	
	
}
