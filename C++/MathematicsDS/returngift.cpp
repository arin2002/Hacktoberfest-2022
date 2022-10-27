#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
            int a,b,sum=0,temp;
        int ani,fac,coun=0;
            bool q=true;
        cin>>a;
        cin>>b;
        sum=a+b;
        temp=sum;




        //for prime number
        ani=0;
        while(q){
                coun++;


                fac=0;
            for(int j=1;j<=sum;j++){
                    if(sum%j==0){
                            fac++;
                    }
                    else{
                         continue;
                    }
                }

                if(fac==2)
                    {
                        if(coun==1){
                                sum=sum+1;
                           continue;
                        }
                        else{
                                q=false;

                        }

                    }
                else{
                    sum=sum+1;
                    }
                    }
        cout<<sum-temp<<endl;
    }
}
