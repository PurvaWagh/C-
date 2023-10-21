#include<iostream>
using namespace std;

class A
{
	int a;
	public:
		
		 A(){
		cout<<"enter the val of a\n";
		cin>>a;
			
		}
		
		void show(){
			cout<<"value of a ="<<a<<endl;
		}
		
		friend void manipulate(A &);
};

void manipulate(A & c){
	c.a = c.a +5;
}


int main(){
	
	A obj;
	manipulate(obj);
	obj.show();
}
