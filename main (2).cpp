#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{ // NAME ----- A N K I T   K U M A R   M I S H R A
// ROLL NO-----2 1 0 0 2 9 0 1 2 0 0 3 0
    /*The logic
    Total allowed weight is 3000 kg
    Total weight of vehicle is 1800kg
    Total Weight of luggage is 400 Kg
    Weight of driver is 100 kg
    The weight allowed is 700 kg
    We need to find the value of n which denotes the number of persons required to pass the check post by walking
    */
    int n,sum=0,count=0;
    cout<<"Enter the Weight of 10 persons :- ";
    int arr[10];
    for(int i=0;i<10;i++)
    cin>>arr[i];
    for(int i=0;i<10;i++)
    {
       
          sum+=arr[i];
       
         if(sum>700)
        break;
         count++;
      
    }
    cout<<"The total numbers persons required to pass the checkpost by walking is "<<10-count;
return 0;
}
