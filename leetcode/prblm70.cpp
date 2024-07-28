//https://leetcode.com/problems/climbing-stairs/description/

#include<iostream>
using namespace std;
long long fact(int n){
	if (n<=1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int bruteforce_climbStairs(int n) {
	int ones=n;
	int twos=0;
	int ans=1;
	//works only when n<=21 , otherwise overflow : we can use bigingter here to prevent that 
	while(ones-2>=0){
		//replacing a pair of ones in the 1+1+1+...1=N  with a 2
		n--; //instead of taking 2 steps we have to take only one now
		ones-=2;
		twos +=1;

		//permutation
		if(ones>0){
			long long temp= fact(ones)*fact(twos);
			ans+=fact(n)/temp;
		}
		else{
			ans+=1; //2+2+2+...+2=N
		}
	}
	return ans;
}

int dp_climbStairs(int n) {
	if (n==1){
		return 1;
	}
	int step1=1;
	int step2=1;
	for(int i=2;i<=n;i++){
		int stepi =step1+step2;
		step1=step2;
		step2=stepi;
	}
	return step2;
}

int main()
{
	cout<<"bruteforce: "<<bruteforce_climbStairs(21)<<endl; //max 21
	cout<<"DP: "<<dp_climbStairs(45)<<endl; //max 45
}