#include<iostream>
using namespace std;
class Calculator{
	public:
		inline int cube(int n){
			return n*n*n;
		}
};
int main(){
	Calculator* cal=new Calculator();
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
    cout<<"the cube of"<<n<<"is"<<cal->cube(n)<<endl;
	
}
