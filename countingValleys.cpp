#include <iostream>
using namespace std;

int countingValleys(char arr[]){
    int d=0,valley=0;
    	for(int i=0 ; i<sizeof(arr) ; i++){
	    if(arr[i] == 'D')
	    d++;
	    if(arr[i] == 'U')
	    d--;
	    if(d==0 && arr[i-1]=='U')
	    valley++;
	   }
	   return valley;
}

int main() {
	char arr[]={'D','U','D','D','U','U','U','D','D','U'};
	int valley_traversed = countingValleys(arr);
	cout<<valley_traversed;
}
