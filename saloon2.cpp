#include <iostream>


using namespace std;

int main()
{
    float basicPrice, hairLengthPrice, stylePrice, totalPrice;
    char userGender, userHairLength, userStyle, anotherCustomer;
    
    
    do {
    cout << "Enter gender (F/M): \n";
    cin >> userGender;

    cout << "Enter hair length (S/M/L): \n";
    cin >> userHairLength;

    cout << "Enter style (R/S): \n"; 
    cin >> userStyle;
    
    cout << "Add another customer? (Y/N); \n";
    cin>>anotherCustomer;
    
    
    if ((userGender == 'F')||(userGender == 'f')) {
      
      if ((userHairLength == 'S')||(userHairLength == 's')) {
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 25.0;
              
          }
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 35.0;
              
          }
    } else if ((userHairLength == 'M')||(userHairLength == 'm')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 30.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 40.0;
          }
    } else if ((userHairLength == 'L')||(userHairLength == 'l')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 35.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 45.0;
              
          }
    }
      // below are testing for male scenarios
  } else if ((userGender == 'M')||(userGender == 'm')) {
      
      if ((userHairLength == 'S')||(userHairLength == 's')) {
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 28.0;
              
          }
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 33.0;
              
          }
    } else if ((userHairLength == 'M')||(userHairLength == 'm')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 31.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 36.0;
          }
    } else if ((userHairLength == 'L')||(userHairLength == 'l')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice += 35.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice += 40.0;
              
          }
    }
      
  } else {
      cout<<"Invalid values inserted";"\n";
  } 
  
  } while ((anotherCustomer=='Y')||(anotherCustomer=='y'));
  
  cout<<"The total price is: RM"<<totalPrice;
    return 0;
}
