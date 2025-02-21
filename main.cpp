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


    // Problem5
    // int n;
    //     cout<<"Enter a positive integer:";
    //     cin>>n;
    //
    //     if (n<=0) {
    //         cout<<"Invalid input";
    //
    //     }else {
    //         cout<<"Digits from right to left:";
    //
    //         while (n>0) {
    //             int digit =n%10;
    //             cout<<digit<<" ";
    //             n/=10;
    //         }
    //         cout<<endl;
    //     }


    // Problem6
    // int a,b;
    //     cout<<"Enter two positive integers:";
    //     cin>>a>>b;
    //
    //     if (a<=0 || b<=0) {
    //         cout<<"Invalid input";
    //
    //     }else {
    //         while (b !=0) {
    //             int temp =b;
    //             b = a%b;
    //             a = temp;
    //         }
    //         cout<<"Greatest common divisor:"<<a<<endl;
    //     }


    // Problem7
    // int sum = 0, count = 0, num;
    //     cout<<"Enter integers:";
    //
    //     while (sum<= 100) {
    //         cin>>num;
    //         sum+= num;
    //         count;
    //
    //         if (sum>100) {
    //             break;
    //         }
    //     }
    //
    // cout<<"Total sum:"<<sum<<endl;
    //     cout<<"Number of inputs entered:"<<count<<endl;


    // Problem8
    // int balance = 500, withdrawAmount;
    // cout<<"Your balanse is $500";
    //
    // while (balance>0) {
    //     cout<<"Enter withdrawal amount:";
    //     cin>>withdrawAmount;
    //
    //     if (withdrawAmount ==0) {
    //         cout<<"Transaction ended. Final balance :"<<balance<<endl;
    //         break;
    //     }else if (withdrawAmount > balance) {
    //         cout<<"Error! Insufficient balance"<<balance<<"."<<endl;
    //     }else  {
    //         balance -= withdrawAmount;
    //         cout<<"Withdrawal successful! Remaining balance;"<<balance<<endl;
    //     }
    // }
    // if (balance == 0) {
    //     cout<,"Your balance is zero."<<endl;
    // }


// Problem9
// char response;
//      do {
//          cout<<"Enter 'Y' for Yes or 'N' for No:";
//          cin>> response;
//      }while (response != 'Y' && response != 'N' && response != 'y' && response != 'n' );
//
//     cout<<"You entered a valid response :"<<response<< endl;


// Problem10
// int choice;
//     do {
//         cout<<"\nATM Menu;"<<endl;
//         cout<<"1. Check balance"<<endl;
//         cout<<"2. Deposit Money"<<endl;
//         cout<<"3. Withdraw money"<<endl;
//         cout<<"4. Exit"<<endl;
//         cout<<"Enter your choise:";
//         cin>>choice;
//
//         if (choice ==1) {
//             cout<<"Your balaance is $1000"<<endl;
//         }else if (choice ==2) {
//             cout<,"Deposit successful"<<endl;
//         }else if (choice ==3) {
//             cout<<"Withdrawal successful"<<endl;
//         }else if (choice == 4 ) {
//             cout<<"Exiting.."<<endl;
//         }else {
//             cout<<"Invalid choice.Try again."<<endl;
//         }
//     }while (choice != 4);


// Problem11
    // int choice;
    // double num1, num2;
    //
    // do {
    //     cout << "\nCalculator Menu:" << endl;
    //     cout << "1. Addition" << endl;
    //     cout << "2. Subtraction" << endl;
    //     cout << "3. Multiplication" << endl;
    //     cout << "4. Division" << endl;
    //     cout << "5. Exit" << endl;
    //     cout << "Enter your choice: ";
    //     cin >> choice;
    //
    //     if (choice >= 1 && choice <= 4) {
    //         cout << "Enter two numbers: ";
    //         cin >> num1 >> num2;
    //     }
    //
    //     if (choice == 1) {
    //         cout << "Result: " << num1 + num2 << endl;
    //     } else if (choice == 2) {
    //         cout << "Result: " << num1 - num2 << endl;
    //     } else if (choice == 3) {
    //         cout << "Result: " << num1 * num2 << endl;
    //     } else if (choice == 4) {
    //         if (num2 != 0)
    //             cout << "Result: " << num1 / num2 << endl;
    //         else
    //             cout << "Error: Division by zero is not allowed." << endl;
    //     } else if (choice == 5) {
    //         cout << "Exiting..." << endl;
    //     } else {
    //         cout << "Invalid choice. Try again." << endl;
    //     }
    // } while (choice != 5);
    //


// Problem12
    // string password = "1234";
    // string userInput;
    // int attempts = 0;
    // bool accessGranted = false;
    //
    // do {
    //     cout << "Enter password: ";
    //     cin >> userInput;
    //
    //     if (userInput == password) {
    //         cout << "Access granted!" << endl;
    //         accessGranted = true;
    //         break;
    //     } else {
    //         cout << "Incorrect password. Try again." << endl;
    //         attempts++;
    //     }
    // } while (attempts < 3);
    //
    // if (!accessGranted) {
    //     cout << "Too many failed attempts. Access denied." << endl;
    // }


// Problem13
// #include <cstdlib> // for randomNumber we should use it at the beginning
//
//         srand(time(0));
//         int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
//         int userGuess;
//
//         do {
//             cout << "Guess the number (between 1 and 100): ";
//             cin >> userGuess;
//
//             if (userGuess > randomNumber) {
//                 cout << "Too high! Try again." << endl;
//             } else if (userGuess < randomNumber) {
//                 cout << "Too low! Try again." << endl;
//             } else {
//                 cout << "Congratulations! You guessed the correct number." << endl;
//             }
//         } while (userGuess != randomNumber);



        return 0;
    }
