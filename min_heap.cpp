#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> v;

     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x;
     cin>>x;
     v.push_back(x);

     int cur_idx = v.size()-1;

     while(cur_idx != 0){
        int pre_idx = (cur_idx-1)/2;
        if(v[pre_idx] > v[cur_idx]){
             swap(v[pre_idx],v[cur_idx]);
        }
        else
            break;
        cur_idx=pre_idx;
     }
     }

     for(int n:v){
         cout<<n<< " ";
     }

    return 0;
}
