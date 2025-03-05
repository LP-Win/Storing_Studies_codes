#include <iostream>
using namespace std;

void printlogo(){
    cout<<" ____        ___  _ "<<endl;
    cout<<"|  _ \\      / _ \\/ |"<<endl;
    cout<<"| |_) |____| | | | |"<<endl;
    cout<<"|  __/_____| |_| | |"<<endl;
    cout<<"|_|         \\___/|_|"<<endl;
}

void printmenu(){
    
    cout<<"1.Money Exchange Program"<<endl;
    cout<<"2.Worker Salary Calculate"<<endl;
    cout<<"3.Sum/Mul of 1...n"<<endl;
    cout<<"4.Exit"<<endl;
    
}

float exchangeUSDKHR(bool isUSDToKHR){
    float amount;
    string currency = (isUSDToKHR)? "($)": "(Riels)";
    cout<<"Enter Amount : "; cin>>amount;
    cout<<"Amount : "<<amount<<currency<<endl;


    if(isUSDToKHR==true){
        return amount * 4000;
    }else {
        return amount / 4000;
    }

}

void pressentertocontinue(){
    cout<<"\n ------------<< Press Enter To Continue >>------------"<<endl;
    cin.ignore();
    cin.get();
}

int main(){
    
    system("clear");
    int option;
    do{
        printlogo();
        printmenu();
        cout<<"Choose Option : "; cin>>option;
        switch (option)
        {
        case 1:
        while(true){
            system("clear");
            int op;
            cout<<"1.Exchange From USD --> KHR"<<endl;
            cout<<"2.Enchange From KHR --> USE"<<endl;
            cout<<"3.Exit"<<endl;
            cout<<"Choose Exchange Option (1-3) : "; cin>>op;
            if(op==1){
                cout<<"USD -->> KHR"<<endl;
                float usd = exchangeUSDKHR(true);
                cout<<"Result ; "<<usd<<" Riel"<<endl;
            }else if(op==2){
                cout<<"KHR -->> USD"<<endl;
                float khr = exchangeUSDKHR(false);
                cout<<"Result : "<<khr<<" $"<<endl;
            }else if(op==3){
                cout<<"Exit"<<endl;
                break;
            }else {
                cout<<"Please try again !!"<<endl;
            }
            pressentertocontinue();
        }
        break;
        case 2:{
            system("clear");
                                                                                                                                                       
        
        }
            break;
        case 3:{}
            break;
        case 4:{}
            break;
        
        default:
            break;
        }

    }while (option !=4);
    




    return 0;
}