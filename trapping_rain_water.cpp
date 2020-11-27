#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;


// find the left maximum of the array
int left_max(int arr[],int n,int i)
{
  int l_maximum = 0 ;
  for(int j=0;j<=i;j++)
  {
      l_maximum = std::max(l_maximum,arr[j]) ;
  }
 cout<<"Left maximum:"<<l_maximum<<endl;  
 return l_maximum;
}

//find the right maximum of the array
int right_max(int arr[], int n,int i)
{
  int r_maximum = 0;
  for(int j=n-1;j>=i;j--)
  {
      r_maximum = std::max(r_maximum,arr[j]) ;
  } 
cout<<"Right maximum:"<<r_maximum<<endl;  
return r_maximum;
}
//find the trapped water between the arrays
int find_trapping_water(int arr[] , int n)
{
    int total_water_trapped =0 ;
    //find the left max 
    for(int i=1;i<n-1;i++)
    {   
        int left_maximum = left_max(arr,n,i);
        int right_maximum = right_max(arr,n,i);
        total_water_trapped = total_water_trapped + std::min(left_maximum,right_maximum) - arr[i];
    }
    return total_water_trapped;
}

// main()

int main(void)
{
    int n , arr[100],ans;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"\nEnter the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans = find_trapping_water(arr,n);
    cout<<"\nThe total water that can be trapped in our arrays:"<<ans<<endl;
    return 0;
}