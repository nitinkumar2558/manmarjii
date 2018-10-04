
#include <iostream>
using namespace std;
//asking user for choice
//define functions


int f1(int),fun2(int,int),fun3(int,int);
void fun1();

int main() {

int z,a;

	f1(z);
	if (z=1)

	fun1();
	else if (z=2)
	fun2(1120,22.5);
	else fun3(22.5,20);


return 0;
}

int f1(int a){
cout<< "You are a salesperson of Bata shoe company, where each shoe is Rs"<< "225"<<" Company gave you three options for the salary."<< endl;
cout<<"you have have three choices:"<<endl;
	cout<<"1"<<"Just a salary of Rs "<<"600 "<<"per week"<<endl;
	cout<<"2"<<"A salary of Rs"<<"7.00"<<" per hour plus a "<<"10"<<"percent commission on sales(Assume you work"<<" 40"<<" hours a week)"<<endl;

	cout<<"3"<<"No salary, but"<< "20"<<"percent commissions and Rs"<<"20 "<<"for each pair of shoes sold "<<endl;

 cout<<"to find your ultimate salary of month press"<<" 1,2,3 "<<"as per your preference"<<endl;

cin >> 'a';
return (a);
}


void fun1(){

cout<<"monthly salary is("<<"4 "<<"weak per month)"<<"= 2400"<<endl;
}

int fun2(int p,int q){
int a,h;
cout<<" to find your monthly salary please tell how much pair you can sell in one weak(40 hour a weak is working)"<<endl;
cin>>a; 
h=p+(q*a);

cout<< "your salary will be(assuming 4 weak in month)"<<endl;
return (h);


}

int fun3(int x,int y){
int a,h;
cout<<" to find your monthly salary please tell how much pair you can sell in one day"<<endl;
cin>>a;
h=(a*x)+(a*y);
cout<< "your salary will be(assuming 4 weak in month)"<<endl;
return (h);

}


