#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
int precedence(char ch){

if(ch=='+'){
   return 1;
}
else if(ch=='*'){
   return 1;
}
else if(ch=='/')
{
    return 2;
}
else{
    return 2;
}

}

int solve(int v1 ,int v2,char opt){
    if(opt=='/'){
        return v2/v1;
    }
    else if(opt=='*'){
        return v2*v1;
    }
   else if(opt=='+'){
       return v2+v1;
}
else{
    return v2-v1;

}
}
int main(){
    string exp ="2*(4+5-2*3/5)";
    stack<int>opnd;
    stack <char> opr;
    for(int i =0;i<exp.length();i++)
    {
        char ch = exp[i] ;

        



    }









    return 0;
}