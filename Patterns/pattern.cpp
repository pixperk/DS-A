#include<bits/stdc++.h>
using namespace std;
/* https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
 */

void pattern1(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=rows; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=i; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=i; ++j){
            cout<<j<<" " ;
        }
        cout<<endl;
    }
}
void pattern4(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=i; ++j){
            cout<<i<<" " ;
        }
        cout<<endl;
    }
}
void pattern5(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=rows-i+1; ++j){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int rows){
    for(int i=1; i<=rows; ++i){
        for(int j=1; j<=rows-i+1; ++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int rows){
    for(int i=1; i<=rows; ++i){
        //space
        for(int j=1; j<=(rows-i); j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<=(i*2-1); j++){
            cout<<"*";
        }
        //space
        for(int j=1; j<=(rows-i); j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int rows){
    for(int i=1; i<=rows; i++){
        //space
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        //star
         for(int j=1; j<=2*rows-(2*i-1); j++){
            cout<<"*";
         }
        //space
         for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
void pattern9(int rows){
    pattern7(rows/2);
    pattern8(rows/2);
}
void pattern10(int rows){
    for(int i=1; i<=2*rows-1; ++i){
        int stars = i;
        if(i>rows){
            stars=(2*rows-i);
        }
        for(int j=1; j<=stars; ++j){
            cout<<"* ";
        }
        cout<<endl;
}
}
void pattern11(int rows){
    int start=1;
    for(int i=1; i<=rows; i++){
        if (i%2==0) start=0;
        else start=1;
        for(int j=0; j<i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void pattern12(int rows){
    for (int i=1; i<=rows; i++){
        //number
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //space
        for(int j=1; j<=2*rows-2*i; j++){
            cout<<" ";
        }
        //number
        for(int j=i; j>=1; j--){
            cout<<j;
    }
    cout<<endl;
}
}
void pattern13(int rows){
    int num=1;
    for(int i=0; i<=rows; i++){
        for(int j=1; j<=i; j++){
            
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}
void pattern14(int rows){
    for(int i=0; i<=rows; ++i){
        for(char j='A'; j<='A'+i-1; ++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int rows){
    for(int i=1; i<=rows; i++){
        for(char j='A'; j<='A'+(rows-i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int rows){
    for(int i=1; i<=rows; i++){
        char ch = 'A'+i-1;
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern17(int rows){
     
    for(int i=1; i<=rows; ++i){
        char alpha = 'A';
        //space
        for(int j=1; j<=(rows-i); j++){
            cout<<" ";
        }
        //alpha
       
        for(int j=1; j<=(i*2-1); j++){
            cout<<alpha;
            if(j<i) alpha++;
            else alpha--;
            

        }
        //space
        for(int j=1; j<=((rows-i)); j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int rows){
    for(int i=1; i<=rows; i++){
        char alpha= 'A'+(rows-i);
        for(int j=1; j<=i; j++){
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;
    }
}
void pattern19(int rows){
    int space = 0;
    for(int i=1; i<=rows; i++){
        //star
        for(int j=1; j<=rows-i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<=rows-i+1; j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    space=2*rows-2;
    for(int i=1; i<=rows; i++){
         //star
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;

    }
}
void pattern20(int rows){
    
    int space=2*rows-2;
    for(int i=1; i<=2*rows-1; i++){
        int stars = i;
        if(i>rows){
            stars = 2*rows-i;
        }
        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        //spaces
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<rows)space-=2;
        else space+=2;
    }
}
void pattern21(int rows){
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows; j++){
            if (i==1||j==1||i==rows||j==rows){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    pattern21(5);
 return 0;
}