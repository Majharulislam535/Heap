#include <bits/stdc++.h>
using namespace std;


 void input_heap(vector<int> &v,int x){

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

  void delete_heap(vector<int> &v){

     v[0]= v[v.size()-1];
     v.pop_back();

     int cur =0;
     while(true){
         int left_idx = cur * 2 +1;
         int right_idx = cur * 2 +2;
         int last_idx = v.size()-1;

         if(left_idx<= last_idx && right_idx <= last_idx){
              if(v[left_idx] <= v[right_idx] && v[left_idx] <v[cur]){
                  swap(v[left_idx],v[cur]);
                  cur=left_idx;
              }
              else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur]){
                  swap(v[right_idx],v[cur]);
                  cur=right_idx;
              }
              else{
                 break;
              }

         }
         else if(left_idx <=last_idx){
             // left a aci

             if(v[left_idx] < v[cur]){
                 swap(v[left_idx],v[cur]);
                 cur = left_idx;
             }
             else{
                 break;
             }
         }
         else if(right_idx<=last_idx){
             // right a aci

             if(v[right_idx]< v[cur]){
                 swap(v[right_idx],v[cur]);
                 cur=right_idx;
             }
             else{
                break;
             }
         }
         else{
             break;
         }


     }

  }

   void print_heap(vector<int> v){

      for(int i:v){
         cout<< i << " ";
      }
      cout<<endl;

    }


int main()
{
     vector<int> v;
     int n;
     cin>>n;

     for(int i=0;i<n;i++){
         int x;
         cin>>x;
         input_heap(v,x);
     }

      print_heap(v);
      delete_heap(v);
      print_heap(v);



    return 0;
}
