// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int a[1000][1000] ={0};
//     for(int row=0; row<m; row++){
//         for(int col =0; col<n; col++){
//             cin>>a[row][col];
//         }
//     }

//     for(int col =0;col<n; col++){
//         if(col%2==0){
//             for(int row=0; row<m; row++){
//                 cout<<a[row][col]<<" ";
//             } 
//             else{
//                 for{int row=m-1; row>=0; row--}{
//                     cout<<a[row][col]<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
    
// } 



#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
     int a[1000][1000] ={0};
    int val = 1;
    for(int row=0; row<=5-1; row++){
        for(int col=0; col<=3-1; col++){
            a[row][col] = val;
            val = val+1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
            for(int col =0;col<n; col++){
        if(col%2==0){
            for(int row=0; row<m; row++){
                cout<<a[row][col]<<" ";
            } 
        }
            else{
                for{int row = m-1; row>=0; row--}{
                    cout<<a[row][col]<<" ";
                }
            }
        }
         return 0;
    }
