#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	/*
	auto add= [](int a, int b){
	return a+b;
	};
	cout<<"sum: "<<add(4,5)<<endl;
	
	int x=10;
	int y=20;
	auto add1=[=](int a){return x+y+a;};
	cout<<"sum: "<<add1(5)<<endl;
	cout<<"sum: "<<add(3,7)<<endl;
	
	auto addByRef=[&x,&y](int a)
	{
		x=30; //modifying x
		return x+y+a;
	};
	cout<<"x: "<<x<<endl;
	cout<<"sum: "<<addByRef(5)<<endl;
	

	auto modifyX=[x]() mutable
	{

	x=20; // this modifies the local copy of x, not the original x

	cout<<"Inside lambda, x = "<<x<<endl;

	};

	modifyX();

	cout<<"Outside lambda, x = "<<x<<endl;
	
	auto divide=[](int a,int b)->double //return type
	{
		if (b==0)
		{
			return 0;
		}
		else
		{
			return static_cast<double>(a)/b;  //typecasting int to double
		}
	};
	cout<<"Division result: "<<divide(10,2)<<endl;
	cout<<"Division by zero: "<<divide(10,0)<<endl;
	
	
	
	vector<int> nums={4,8,6,100,7};
	sort(nums.begin(),nums.end(),[](int a, int b){ return a>(b+3);});
	for(int i: nums)
	{
		cout<<i<<"  ";
	}
	cout<<endl;
	*/
	vector<int> numbers={1,2,3,4,5};

	for_each(numbers.begin(),numbers.end(),[](int n)
	{

		cout<<n<<" ";

	});
	
	
	

	
}