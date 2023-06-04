#include<bits/stdc++.h>
using namespace std;


void printNumbers(int n) {

	if(n>0){
		printNumbers(n-1);
	}
	else return;

	printf("%d\n",n);
}

int main() {
  int n;
  scanf("%d", &n);

  printNumbers(n);

  return 0;
}