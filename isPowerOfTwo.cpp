#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
        return n > 0 &&  (n & (n-1))==0;
    }



int main(void)

{
	int i;
	cin>>i;
	cout<<isPowerOfTwo(i)<<endl;

	return 1;

}

