#include <iostream>

using namespace std;



int main ()
{
  float basicPrice, hairLengthPrice, stylePrice, totalPrice;
  char userGender, userHairLength, userStyle;

  cout << "Input your gender\n";
  cin >> userGender;

  cout << "Input your hairlength\n";
  cin >> userHairLength;

  cout << "Input your style\n"; 
  cin >> userStyle;
  
  
  if ((userGender == 'F')||(userGender == 'f')) {
      
      if ((userHairLength == 'S')||(userHairLength == 's')) {
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 25.0;
              
          }
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 35.0;
              
          }
    } else if ((userHairLength == 'M')||(userHairLength == 'm')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 30.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 40.0;
          }
    } else if ((userHairLength == 'L')||(userHairLength == 'l')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 35.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 45.0;
              
          }
    }
      // below are testing for male scenarios
  } else if ((userGender == 'M')||(userGender == 'm')) {
      
      if ((userHairLength == 'S')||(userHairLength == 's')) {
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 28.0;
              
          }
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 33.0;
              
          }
    } else if ((userHairLength == 'M')||(userHairLength == 'm')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 31.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 36.0;
          }
    } else if ((userHairLength == 'L')||(userHairLength == 'l')){
          
          if ((userStyle == 'R')||(userStyle == 'r')){
              
              totalPrice = 35.0;
              
          } 
          
          if ((userStyle == 'S')||(userStyle == 's')){
              
              totalPrice = 40.0;
              
          }
    }
      
  } else {
      cout<<"Invalid values inserted";"\n";
      
  }
  //closing brace for male block
  
  cout<<totalPrice;"\n";
  return 0;
} // Closing brace for main block


 



