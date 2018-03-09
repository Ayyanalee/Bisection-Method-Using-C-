// Bisection Method
#include <iostream>
#include <cmath>
#define f(x) (x*x*x-9*x+1)
using namespace std;

int main () {
	float x, a, b, m1, valuesofm1[1000];
	float racc, acc;
	int i=1;
	
//Step 1 - Taking intervals
	step1:
	cout<<"Please enter interval a:";
	cin>>a;
	cout<<"Please enter interval b:";
	cin>>b;
	cout<<"Please enter accuracy:";
	cin>>racc;
	
//Step 1 - Checking intervals
	if (f(a)*f(b)<0) {
		cout<<"You have chosen right interval ["<<a<<" , "<<b<<"]"<<endl;
	}
	else { goto step1; }
	
//Step 2 - Finding Midpoint
	step2:
	m1=(a+b)/2;
	
//Step 3 - Investigating 
	if (f(m1)==0) {
		cout<<m1<<" is the root of given equation"<<endl;
	}
	else {
			if (f(a)*f(m1)<0) {
				cout<<"Root lies in between ["<<a<<" , "<<m1<<"]";
				valuesofm1[i]=m1;
				b=m1;
				 if (i>=2) {
				acc=abs(valuesofm1[i]-valuesofm1[i-1])*100;
				cout<<"				Accuracy: "<<acc<<endl;
				if (acc<=racc) {
					goto end;
				}
				}
				else if (i<2){
					cout<<""<<endl;
				}
				i++;
				goto step2;
			}
			if (f(m1)*f(b)<0) {
				cout<<"Root lies in between ["<<m1<<" , "<<b<<"]";
				valuesofm1[i]=m1;
				a=m1;
				if (i>=2) {
				acc=abs(valuesofm1[i]-valuesofm1[i-1])*100;
				cout<<"				Accuracy: "<<acc<<endl;
				if (acc<=racc) {
					goto end;
				}
				}
				else if (i<2){
					cout<<""<<endl;
				}
				i++;
				goto step2;
			}
		}
		end:
		cout<<"THANK YOU! Your program is completed in "<<i<<" itterations";
	}
	
