// #include<iostream>
// using namespace std;

// int main(){
//     int a[5][3];
//     int val = 1;
//     for(int row=0; row<=5-1; row++){
//         for(int col=0; col<=3-1; col++){
//             a[row][col] = val;
//             val = val+1;
//             cout<<a[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
   int m, n;
   cin>>m>>n;
   int a[1000][1000] = {0};
    int val = 1;
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            a[row][col] = val;
            val = val+1;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}