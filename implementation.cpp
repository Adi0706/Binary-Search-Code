#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;

    int mid_element = (start + end)/2;

    while(start<=end)
    {
        if(arr[mid_element]==key)
        {
            return mid_element;
        }
        if(key>arr[mid_element])
        { 
            start = mid_element+1;
        }
        else
        {
            end = mid_element-1;
        }
        mid_element = (start+end)/2;
    }

return -1 ;
}

int main()
{
    int key;
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};
    cout<<"enter the element you want to search"<<endl;
    cin>>key;

    int result=binarysearch(even,6,key);
    cout<<"index of your key is "<<result;
    return 0;
}