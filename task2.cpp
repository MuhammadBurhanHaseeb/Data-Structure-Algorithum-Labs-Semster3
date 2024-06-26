#include<iostream.>
#include<cmath>
using namespace std;
void displayNo(int *q);
void checkSmallestOrGreatest(int *p, int *pp, int *ppp);
 main()
{
 /* // task2 ka question no 1
    int n;
	cout<<"enter the no  ";
	cin>>n;
	cout<<"address of the variable = "<< &n;

	// task2 ka question no 2 
	int *p , h ;
	cout<<"enter the no  ";
	cin>>h;
	p = &h;
    cout<<"value of the pointer to the addrees of the variable = "<< *p;

	// task2 ka question no 3
	int *no , a ;
	cout<<"enter the no  ";
	cin>>a;
	no = &a;
    displayNo(no);*/

	// task2 ka question no 4 
	int *p , *pp , *ppp , i ,o ,u ;
	cout<<"enter the no  ";
	cin>>i;
	cout<<"enter the no  ";
	cin>>o;
	cout<<"enter the no  ";
	cin>>u;
	p = &i;
	pp = &o;
	ppp = &u;
	checkSmallestOrGreatest(p,pp,ppp);
    

	
}
	void displayNo(int *q)
	{
		cout<<"print the value of the pointer that is passes asa a parameter "<< *q;
	}
	void checkSmallestOrGreatest(int *p, int *pp, int *ppp)
	{
		if(*p > *pp && *p > *ppp)
		{
			cout<<"the first no is greater than all nos "<< *p <<endl;
		}
		else if (*pp > *p && *pp > *ppp)
		{
			cout<<"the second no is greater than all nos "<< *pp <<endl;
		}
		else if (*ppp > *p && *ppp > *pp)
		{
			cout<<"the third no is greater than all nos "<< *ppp <<endl;
		}
		if(*p < *pp && *p < *ppp)
		{
			cout<<"the first no is smallest than all nos "<< *p <<endl;
		}
		else if (*pp < *p && *pp < *ppp)
		{
			cout<<"the second no is smallest than all nos "<< *pp <<endl;
		}
		else if (*ppp < *p && *ppp < *pp)
		{
			cout<<"the third no is smallest than all nos "<< *ppp <<endl;
		}
	}