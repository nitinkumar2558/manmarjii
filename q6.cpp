//Write a function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array. 

#include<iostream>
using namespace std;

int countEvan(int*aarray,int x);


int main() {


int array[6]={23,66,78,55,33,'\0'};

int p;
p=countEvan(array,6);
cout<<p;
}




int countEvan(int*aarray,int x){


  int* p=aarray;
if(*p%2)
{cout<<p<<endl;}                                               
else{ p=&aarray}{
for(int i=1,i<x,i++;){
p=aarray[i];}

}

