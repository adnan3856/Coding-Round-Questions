#include <iostream>
#include <cstring>
using namespace std;

int main(){
  string name = "mohammad";
  char name_array[name.length ()];
  char result[name.length ()];
  char guess;
  bool flag = false;
  // convert string to character array
  for (int i = 0; i < name.length (); i++){
      name_array[i] = name[i];
      result[i] = '-';
    }
    
  cout << "Hi you can try ten times to guess the letters of my name" << endl;
  cout << endl;
  for (int i = 0; i < 10; i++){
      cout << "Make your guess" << endl;
      cin >> guess;
      bool flag = false;
      for (int j = 0; j < name.length (); j++){
	  if (guess == name_array[j]){
	      result[j] = name_array[j];
	      flag = true;
	    }
	}
    if (flag==false){
        cout << "You made a wrong guess try again" << endl;
    }
    else{
    cout << "you made a wright guess, my name now is ";
    for (int k = 0; k < name.length (); k++){
    	cout << result[k];
      }
     for (int l = 0; l < name.length (); l++){
    	result[l]='-';
      }
    cout << endl;
  }
  }
  return 0;
}
