#include<iostream>
using namespace std;
class Demo{
	private:
		int privatedata;
	protected:
		int protecteddata;
	public:
		int publicdata;
		Demo(){
			privatedata = 30;
			protecteddata = 90;
			publicdata = 21;
			
		}
		void show(){
			cout<<"privatedata = :"<<privatedata<<endl;
			cout<<"protecteddata = :"<<protecteddata<<endl;
		}
};
int main(){
	Demo d;
	cout<<"publicdata = :"<<d.publicdata<<endl;
	d.show();
	
	return 0;
}
	
