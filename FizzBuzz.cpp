#include <iostream>

int main(){

  for (int i = 1; i <= 100; i++){
    // std::cout << i << "\n"; // prevent/removes the number that meets the condition from appearing twice.


// start with the highest number, that is when the condition is being checked ( 15, 5,3). cause if 15 was at the bottom, fizzbuzz won't be outputted.
    if ( i % 15 == 0){
      std::cout << "FizzBuzz" << "\n";
    }

    else if (i % 5 == 0){
      std::cout << "Buzz. \n";
    }

    else if (i % 3 == 0 ){
      std::cout << "Fizz. \n";
    }

    else{
      std::cout << i << "\n"; 
    }

  }


}
