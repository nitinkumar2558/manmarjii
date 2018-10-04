#include <iostream>
using namespace std;



int f1(int),fun2(int,int),fun3(), fun1();

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

cin >> 'a';
return (a);
}


int fun1(){
return 2400;
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


