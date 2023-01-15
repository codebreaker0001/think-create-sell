#include<iostream>
#include<iomanip>
using namespace std;
/* 1 problem
    1. what if both player choose same positions.
*/

char t;

void output( char b[][3] ){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << setw(3) << b[i][j];
        }
        cout << endl;
    }
}

int main(){
    int p,q,x = 0;
    char a[3][3] ={{'_','_','_',},
                  {'_','_','_',},
                  {'_','_','_',}};
    
    cout<<"player 1[X]"<<endl;
    cout<<"player 2[O]"<<endl;
    int n;

    for (int i=1; i<100; i++){

        if ( a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] != '_'){
            if (a[0][2] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if ( a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] != '_'){
             if (a[0][2] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if ( a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] != '_'){
             if (a[0][0] =='X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if ( a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] != '_'){
             if (a[2][2] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if( a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] != '_'){
             if (a[1][2] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if( a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] != '_'){
             if (a[0][1] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if( a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '_'){
             if (a[0][0] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if( a[2][0] == a[1][1] && a[1][1] == a[0][2] && a[2][0] != '_'){
             if (a[2][0] == 'X'){
                cout << "Player 1 wins!!!" << endl;
            }
            else {
                cout << "player 2 wins!!!" << endl;
            }
            break;
        }
        else if( a[0][0] != '_' && a[0][1] != '_' && a[0][2] != '_' && a[1][0] != '_'&& a[1][1] != '_'&& a[1][2] != '_'&& a[2][0] != '_'&& a[2][1] != '_'&& a[2][2] != '_'){
            cout << "Tie!!!" << endl;
            break;
        }

                if (i%2 == 0 ){
                        t='O';
                        cout << "Player 2 turn: ";
                        cin >> n;
                    }
                    else {
                        t='X';
                        cout << "Player 1 turn: ";
                        cin >> n;
                    }

    switch (n) {
    
        case 1:
            a[0][0] = t;
            output(a);
            break;

        case 2:
            a[0][1] = t;
            output(a);
            break;
        
        case 3:
            a[0][2] = t;
            output(a);
            break;
        
        case 4:
            a[1][0] = t;
            output(a);
            break;

        case 5:
            a[1][1] = t;
            output(a);
            break;

        case 6:
            a[1][2] = t;
            output(a);
            break;

        case 7:
            a[2][0] = t;
            output(a);
            break;

        case 8:
            a[2][1] = t;
            output(a);
            break;

        case 9:
            a[2][2] = t;
            output(a);
            break;
        
        default:
            cout << "invalid choice!" << endl;

    }
    }
return 0;
}