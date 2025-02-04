#include<iostream> 
using namespace std; 

int main(){
    // Logical operators 
    // AND && 
    system("cls"); 
    // requirement -> gender = f , grade = 12 
    char gender = 'f'; 
    int grade = 12;
    int age = 18; 
    // 1 AND 1 = 1 
    // 1 AND 0 = 0 
    // 0 AND 1 = 0 
    // 0 AND 0 = 0 
    if( gender == 'f' && grade == 12 && age == 18){
        cout<<"You are able to apply !! "<<endl; 
    }else {
        cout<<"You are NOT able to apply!! "<<endl; 
    }
    return 0 ; 
}
