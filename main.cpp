#include<iostream>
using namespace std;
int main() {
    //   problem1 A
    // int sum=0;
    // for (int i=1;i<=100;i++) {
    //    sum+=i;
    // }
    //
    // cout<<sum;

    // B
    // int n,sum2=0;
    //     cin>>n;
    //     while (n>0) {
    //         sum2+=n;
    //         n--;
    //     }
    // cout<<sum2;

    // Problem2
    // A
    // int count=0,num=2;
    // cout<<"First 10 prime numbers:";
    // for (  ;count<10;num++) {
    //     bool isPrime = true;
    //
    //     for (int i=2;i*i<=num;i++) {
    //         if (num%i==0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime) {
    //         cout<<num<<" ";
    //         count++;
    //     }
    //
    //     cout<<endl;

// B
// int n,count=0, num=2;
//     cout<<"Enter number:";
//     cin>>n;
//     while (count<n) {
//         bool isPrime=true;
//
//         for (int i=2;i*i<=num;i++) {
//             if (num%i==0) {
//                 isPrime=false;
//                 break;
//             }
//         }
//         if (isPrime) {
//             cout<<num<<" ";
//             count++;
//         }
//         num++;
//     }
//
// cout<<endl;


// Problem3
// int n;
//     do {
//         cout<<"Enter a positive number:";
//         cin>>n;
//
//         if (n<=0) {
//             cout<<"Invalid input"<<endl;
//         }
//     }while (n<=0);
//
//     cout<<"Collatz sequence:"<<n<<" ";
//
//     while (n !=0) {
//         if (n%2==0) {
//             n /=2;
//         }else {
//             n=3*n+1;
//         }
//         cout<<n<<" ";
//     }
//
// cout<<endl;


// Problem4
// int n, count=0;
//     cout<<"Enter a positive number:";
//     cin>>n;
//
//     if (n<=0) {
//         cout<<"Invalid input";
//     }else {
//         while (n>0) {
//             n /=10;
//             count++;
//         }
//         cout<<"Number of digits :"<<count<<endl;
//     }




















        return 0;
    }
