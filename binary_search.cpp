#include <iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

int main() {
	// your code goes here
	int i,target =5, high ,low =0,mid  ;
	std::vector<int> a ;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(10);
	high = a.size() -1 ;
    mid = (low+high)/2;
	for(i =0 ;i<a.size();i++)
	{
	    cout<<a[i]<<endl;;
	}
	while(low <= high)
	{
	    mid = (low+high)/2;
	    if(a[mid] == target)
	{
	    cout<<"Target Element found";
	    exit(-1);
	}
	    else if (a[mid] < target) 
    {
	    low = mid+1 ;
	}
	    else
	{
	    high = mid-1 ;    
	}
	}
	cout <<"Target element not found";
	return 0;
}
