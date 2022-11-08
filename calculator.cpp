#include <iostream>

using namespace std;



string op;
int num3;
double trigonum;

double pow(double num1, double num2){  //defining a^b
        int result=1;
        for(int k=0; k<num2; k++){
            result=result*num1;
        }
        return result;
}

int fact(int n){   //defining factorial
int i=1;
for(int j=1; j<=n; j++){
    i=i*j;
}
return i;
}

float sin(float n){  //defining sine

    float s=0;
    for (int k=1; k<=10; k++){
        s = s + pow(-1, k+1)*(pow(n, 2*k-1)/fact(2*k-1));
    }
    return s;
}

float cos(float n){  //defining cosine
    float s=1;
    for (int k=2; k<=10; k++){
        s = s + pow(-1, k+1)*(pow(n, 2*k-2)/fact(2*k-2));
    }
    return s;
}

float tan(float n){  //defining tangent
    float t = sin(n)/cos(n);
    return t;
}







int main()
{
double num1, num2, answer, task;
    cout << "\t\t\t Simple Calculator \n\n\n" << endl;
    cout<<"For algebraic operations press '1'.\nFor trigonometric operations press '2'.";
    cin>>task;
    if(task== 1){



    cout<<"Enter the first number:";
    cin>>num1;

    cout<<"Enter the second number:";
    cin>>num2;

    cout<<"Select an operator: (+,-,*,/,^)";
    cin>> op;

    if(op == "+")
    {
        answer=num1+num2;
        cout<<"\n"<<answer<<endl;
    }
    else if(op == "-"){
        answer=num1-num2;
        cout<<"\n"<<answer<<endl;
    }
else if(op == "*"){
        answer=num1*num2;
        cout<<"\n"<<answer<<endl;
    }
else if(op == "/"&& num2!= 0){
        answer=num1/num2;
        cout<<"\n"<<answer<<endl;
    }
else if(op == "/" && num2== 0){
        cout<<"\n"<<"Cannot divide by 0."<<endl;
    }

else if(op == "^"){

        cout<<pow(num1, num2);

        }
else{
            cout<<"Invalid input";
        }
    }



    if(task==2){
            cout<<"For sine, press 1\nFor cosine, press 2\nFor tangent, press 3";
    cin>>num3;
    cout<<"Enter angle in radian:";
    cin>>trigonum;


    if(num3==1){
        cout<<sin(trigonum);
    }
        if(num3==2){
            cout<<cos(trigonum);
        }
        if(num3==3){
            cout<<tan(trigonum);
        }
    }

    return 0;
}
