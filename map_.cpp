#include<bits/stdc++.h>

using namespace std;




int main()
{

    map<string,int> mp;
    //insert system;
    mp.insert({"mahadi",75});
    mp.insert({"hasan",32});
    mp.insert({"islam",45});
    mp.insert({"majharul",35});

    //insert system;
    mp["mahadi"]=58;
    mp["hasan"]=73;

    for(auto it = mp.begin(); it != mp.end();it++){
         cout<<it->first<<endl;
    }

    if(mp.count("mahadi")){
         cout<<"mahadi"<<endl;
    }
    else{
         cout<<"nay"<<endl;
    }

    return 0;
}


