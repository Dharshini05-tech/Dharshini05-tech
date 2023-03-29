//name - Dharshini G G 
// college - GCE SALEM 


//Grocery Management System
/*  1. welcome message
    2. list of items (  1. Sweet potato 2. Urad dal 3. Rice 4. Cauliflower 5. Atta 6. Carrot display those items using cout)
    3. choose your item (for every item , create a class . In that class , rate of basic quantity)
    4. last total cost (add all the rate)
    5. thank you message 
*/
#include <iostream>
using namespace std;

float sweet_potato() {
    cout<<"Sweet potato 1kg = Rs. 25";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*25<<endl;
    return quantity*25;
}

float urad_dal() {
    cout<<"Urad dal 1kg = Rs. 67";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*67<<endl;
    return quantity*67;
}

float rice() {
    cout<<"Rice 1kg = Rs. 83";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*83<<endl;
    return quantity*83;
}

float cauliflower() {
    cout<<"Cauliflower 1kg = Rs. 40";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*40<<endl;
    return quantity*40;
}

float atta() {
    cout<<"Atta 1kg = Rs. 52";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*52<<endl;
    return quantity*52;
}

float carrot() {
    cout<<"Carrot 1kg = Rs. 35";
    float quantity;
    cout<<"\nEnter the quantity: "; cin>>quantity;
    cout<<"The total cost is: "<<quantity*35<<endl;
    return quantity*35;
}

int main() {
    int option;
    float baseamount, totalamount, a, b, c, d, e, f;
    cout<<"\t\tDharshini G G\n";
    cout<<"\t\t GCE SALEM\n ";
    cout<<"\t Grocery Management System\n ";
    
    cout<<"\t\tWelcome to FineChoice Grocery\n";
start:
    cout<<"\n1. Sweet potato\n2. Urad dal\n3. Rice\n4. Cauliflower\n5. Atta\n6. Carrot\n7. Exit\n";
    cout<<"Enter your choice: "; cin>>option;
    
    switch(option) {
        case 1:
            a=sweet_potato();
            break;
        case 2:
            b=urad_dal();
            break;
        case 3:
            c=rice();
            break;
        case 4:
            d=cauliflower();
            break;
        case 5:
            e=atta();
            break;
        case 6:
            f=carrot();
            break;
        case 7:
            cout<<"Thank you for your purchase!\n";
            cout<<"Visit again. Bye!\n";
            exit(0);
        default:
            cout<<"Invalid input!";
            goto start;
    }
      
    totalamount=a+b+c+d+e+f;
    cout<<"\nThe total cost is: "<<totalamount<<endl;
    goto start;

    return 0;
}


