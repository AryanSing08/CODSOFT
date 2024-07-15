#include<bits/stdc++.h>
using namespace std;

int main(){
    char op;
    double num1,num2;
    cout << "Enter the Operator ( +, -, *, / ) : ";
    cin >> op;
    cout << "Enter two numbers on which operation need to be performed: ";
    cin >> num1 >> num2;
    switch (op){
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<(num1+num2);
            break;

        case '-':
            cout<<num1<<" - "<<num2<<" = "<<(num1-num2);
            break;        

        case '*':
            cout <<num1<<" * "<<num2<<" = "<<(num1*num2);
            break;

        case '/':
            if(num2!=0.0)
                cout<<num1<<" / "<<num2<<" = "<<(num1/num2);
            else{
                while(num2==0.0){
                    cout<<"Divide by zero situation"<<endl;
                    cout<<"Enter the valid numbers for division"<<endl;
                    cin>>num1>>num2;
                    if(num2!=0.0){
                        cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
                    }
                    else{
                        continue;
                    }
                }
            }
            break;
        default:
            cout<<op<<" is an invalid operator";
    }
    return 0;
}