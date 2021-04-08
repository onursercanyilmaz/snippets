#include<iostream>

using namespace std;

class MobilRobot{
	float v;
	float w;
	 public:
		void SpeedInputs(){
			cin>>this->v;
			cin>>this->w;
		}
		float vR(){
			return (2*v+10*w)/2.5;
		}
		float vL(){
			return (2*v-10*w)/2.5;
		}
};

int main(){
	
	MobilRobot *diffDrive = new MobilRobot();
	diffDrive->SpeedInputs();
	cout<<"vR	:"<<diffDrive->vL()<<endl;
	
	
	
}
