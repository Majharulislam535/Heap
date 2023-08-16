#include<bits/stdc++.h>

using namespace std;




int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;



    while(true){
            int c;
            cin>>c;

       if(c==0){
          int x;
          cin>>x;
          pq.push(x);
       }
       else if(c==1){
          cout<<pq.top()<<endl;
       }
       else if(c==2){
          pq.pop();
       }
       else{
          break;
       }
    }



    return 0;
}
