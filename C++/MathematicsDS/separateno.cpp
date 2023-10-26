#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int a0 = 0; a0 < x; a0++){
        string y;

        cin >> y;

         bool post=false;
        long long int res=0;
        if(y[0]=='0'){
            string ny="0";
            long long int sec=1;
            while(ny.size()<y.size()){
                ny+=to_string(sec);
                sec++;
            }

            if(ny==y)
            {
                post=true;
            }
        }
        else
            {
            for(int i=1;i<=(y.size()/2);i++){
                res*=10;
                res+=(y[i-1]-'0');
                long long int sec=res+1;
                string ny=y.substr(0,i);
                while(ny.size()<y.size()){
                    ny+=to_string(sec);
                    sec++;
                }
                if(ny==y){

                    post=true;
                    break;
                }
            }
        }
        if(post&&y.size()>1)
        {
            cout<<"YES "<<res<<endl;
        }

        else
        {

            cout<<"NO"<<endl;


        }
    }
    return 0;
}
