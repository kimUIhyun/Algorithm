#include<iostream>
using namespace std;

int main(void){
	cin.tie(NULL); //C와 입출력 묶음 해제
    ios_base::sync_with_stdio(false); // C와 C++의 버퍼를 분리해서 속도 향상

    int t,num1,num2;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>num1>>num2;
        cout<<num1+num2<<"\n";
    }
}