#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        char str[3][3];
        int cont[]={0,0,0,0};
        int x,y;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>str[i][j];
                if(str[i][j]=='A'){
                    cont[1]++;
                }
                else if(str[i][j]=='B'){
                    cont[2]++;
                }
                else if(str[i][j]=='C'){
                    cont[3]++;
                }
            }
        }
        for(int i=1;i<=3;i++){
            if( cont[i] == 2 ){
                if(i==1) cout<< "A"<<endl;
                else if(i==2) cout<< "B"<<endl;
                else if(i==3) cout<< "C"<<endl;
            }
        }
    }
}