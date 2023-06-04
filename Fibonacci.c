#include<bits/stdc++.h>
using namespace std;


int fib(int n) {
  
	if(n<=1) return n;

	else return fib(n-1)+fib(n-2);

}


int main()
{
   int n_th;
   scanf("%d",&n_th);

   printf("N_th fibonacci number is %d",fib(n_th));
}