// multiple data ko store karne ke liye esko invent kiya gaya 

// simmiler type of data ko store karne ke liye

// it is formed  in contigous  memory location  {lagatar data ka hona}


// STATIC

// declearation
// <Data-type> <array-name>[size-of-data] = {1,2,3,4,4}
// data object ke form me save hota hai 


// how to put initialize value inside array
// int arr [4] = {1,2,3,4,5}



// Fatch karne ke liye 
// cout<<arr[0]
// cout<<arr[1]
// cout<<arr[2]

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr [] = {1,2,3,4,5};
//     cout<<arr[3];

// }





// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr [] = {1,2,3};
//     cout<<arr[9];

// }



#include <iostream>
using namespace std;
int main()
{
    int n;
   cout<<"Enter the size of array";
   cin>>n;
   int b[n];

   for(int i=0;i<=n;++i)
   {
    cin>>b[i];
   }
   
   for(int i=0;i<=n;++i)
   {
    cout<<b[i]<<endl;
   }
   
   
}