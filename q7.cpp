//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
#include<iostream>
using namespace std;

double*maxvalue(double*aarray,double x);

int main() {

double array[6]={34,766,4453,65,54,'\0'};
double *t=double*maxvalue(array, 6);
cout<<*t<<endl;

}

double*maxvalue(double*aarray,double x){

for(int i=1;i<x;i++){
double *p=&aarray[0];
if(*p>aarray[i])  cout<<*p<<endl;
else p=&aarray[i];

}
}
