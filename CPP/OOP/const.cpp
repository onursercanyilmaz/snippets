#include<iostream>

using namespace std;



class Test{
	
	int value1;
	int value2;
	
	public:
		Test(int v1=0, int v2=0)
		{
			value1=v1;
			value2=v2;
		}
		
		
		int getValue1() const{
	
		return value1;
		}
		
		int getValue2() {
		value2 = 50;
		return value2;
		}
};




int main(){

Test t(50,20);
cout<<t.getValue1()<<endl;
cout<<t.getValue2()<<endl;

return  0;

	
}
