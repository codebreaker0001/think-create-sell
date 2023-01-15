#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int p,q,x{0};
    char a[3][3]{{'_','_','_',},
                  {'_','_','_',},
                  {'_','_','_',}};
    //char b[3][3]{{'X','O','X',},
                //   {'X','O','_',},
                //   {'X','_','O',}};
   // char c[3][3]{{'X','X','X',},
                //   {'O','O','_',},
                //   {'X','_','O',}};
   // char d[3][3]{{'O','_','X',},
                //   {'_','O','X',},
                //   {'X','O','X',}};
   // char e[3][3]{{'O','_','X',},
                //   {'_','O','O',},
                //   {'X','X','X',}};
    cout<<"player 1[X]"<<endl;
    cout<<"player 2[O]"<<endl;
    //for(int i=0;i<3;i++){
       // for(int j=0;j<3;j++){
        
for(int i=0;i<4;i++){
    cout<<"player 1 turn";
    cin>>x;
    if(x==1){
        p=0;q=0;
        a[p][q]='X';
    }
    else if(x==2){
        p=0;q=1;
        a[p][q]='X';
    }
    else if(x==3){
        p=0;q=2;
        a[p][q]='X';
    }
    else if(x==4){
        p=1;q=0;
        a[p][q]='X';
    }
    else if(x==5){
        p=1;q=1;
        a[p][q]='X';
    }
    else if(x==6){
        p=1;q=2;
        a[p][q]='X';
    }
    else if(x==7){
        p=2;q=0;
        a[p][q]='X';
    }
    else if(x==8){
        p=2;q=1;
        a[p][q]='X';
    }
    else{
        p=2;q=2;
        a[p][q]='X';
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<setw(4)<<a[i][j];}
            cout<<endl;}

    
    cout<<"player 2 turn"<<endl;
    cin>>x;
    if(x==1){
        p=0;q=0;
        a[p][q]='O';
    }
    else if(x==2){
        p=0;q=1;
        a[p][q]='O';
    }
    else if(x==3){
        p=0;q=2;
        a[p][q]='O';
    }
    else if(x==4){
        p=1;q=0;
        a[p][q]='O';
    }
    else if(x==5){
        p=1;q=1;
        a[p][q]='O';
    }
    else if(x==6){
        p=1;q=2;
        a[p][q]='O';
    }
    else if(x==7){
        p=2;q=0;
        a[p][q]='O';
    }
    else if(x==8){
        p=2;q=1;
        a[p][q]='O';
    }
    else{
        p=2;q=2;
        a[p][q]='O';
    }
    
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<setw(4)<<a[i][j];
        }
        cout<<endl;
        }}
        cout<<endl<<endl;
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]=='_'){
                a[i][j]='X';
            };
            }
            }
            for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<setw(4)<<a[i][j];

            }
            cout<<endl;
            }


}