# EXPERIMENT - 16

## Aim
To understand and implement Exception Handling in C++ programming.

## Apparatus
Visual Studio Code (VS Code)

## Theory
An exception is an unexpected issue that occurs during a program's execution, which can cause it to crash if not handled properly. C++ provides a structured way to deal with runtime exceptions using three main keywords: try, catch, and throw.

## What is Exception Handling?
Exception handling is a programming construct designed to handle the occurrence of exceptions—unexpected problems that arise during the execution of a program. When an exception occurs, it can disrupt the normal flow of the program, leading to crashes or incorrect results. Exception handling allows developers to create robust applications that can respond to these unexpected situations gracefully.

### 1. Try:
Contains the code that may throw an exception.

### 2. Catch: 
Handles exceptions thrown by the try block and contains the code to manage the error.

### 3. Throw: 
Used to signal that an exception has occurred, transferring control to the corresponding catch block.

## Why Use Exception Handling?
Improved Robustness: By catching exceptions, programs can recover from errors and continue running instead of terminating abruptly.
Code Clarity: Separating error-handling code from regular code enhances readability and maintainability.
Resource Management: Exception handling can help manage resources effectively, ensuring that resources are freed or closed properly even when errors occur.

## CodeS 
### 1: Handling Division by Zero
```
//subham
//entc B2
//23070123132
//experiment 16
#include<iostream>
using namespace std;

int main(){
    float n1, n2, ans;
    cout<<"Enter values of number 1 & 2: ";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer = "<<ans<<endl;
        }
    }
    catch(float num){
        cout <<"\nERROR: Division by "<<num<<endl;
    }
}
```

### 2. Validating Age
```
//subham
//entc B2
//23070123132
//experiment 16
#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age <18) {
            throw age; 
        } else {
            
            cout << "Age = " << age <<"/napproved"<< endl;
        }
    } catch (int a) {
        cout << "ERROR :Underage! " << a << endl;
    }

    return 0;
}
```

## Outputs :
### 1.
![Screenshot 2024-09-27 114546](https://github.com/user-attachments/assets/1b902c1f-bff9-41ef-8778-91c481859112)

### 2.
![Screenshot 2024-09-27 114622](https://github.com/user-attachments/assets/544509a9-f4cc-4e23-b673-5bc71769a932)

## Conclusion
Exception handling in C++ enhances program robustness by allowing developers to manage unexpected errors effectively. Using try, catch, and throw, we can create applications that handle runtime issues gracefully, improving user experience and stability.
