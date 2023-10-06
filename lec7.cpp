#include <iostream>
using namespace std;

int main(){

    int password;
    // cout << "Enter the password: ";
    // cin >> password;

    // while(password < 999999){
    //     cout << "the password does not meet the required conditions. please enter the password again";
    //     cin >> password;
    // }

    // cout << " the user has now entered a correct password" << endl;


    // doing the above code with do-while loop.

    // do
    // {
    //     cin >> password;
    // } 
    // while (password<999999);
    


    // infinite while loop.
    
    // int count =0;
    // while (1)
    // {
    //     cout << "chocolates" << endl;
    //     count++;
    //     if(count >100){ break;}
    // }
    

    
    // infinite loop usin for loop.

    int i;
    for(i=0; ;i++){
        cout <<i;
        if(i>100){break;}
    }

    return 0;
}