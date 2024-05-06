#include <iostream>
using namespace std;

    int searchInsert(int nums[], int target) 
    {
        int start = 0;
        int end =4;
        int mid;
        mid = start + (end-start)/2;
        while(start<end)
        {
            if (nums[mid] == target)
            return mid;
            else if (nums[mid]<target)
            {
             start = mid;
             cout<<"start ="<<start<<endl;

            }
            else
            {
             end = mid;
             cout <<"end is = "<<end<<endl;
            }
            mid = start + (end-start)/2;
            cout<<"mid ="<<mid<<endl;
            
        }
        cout<<"didnt cum here"<<endl;
        if(nums[mid]>target)
         return (mid-1);
         else 
         return (mid +1);

    }
    int main()
    { 
        int nums[]={1,2,3,5,6};
        int x = 4;

        cout<<"the index is "<<searchInsert(nums,x)<<endl;
    }