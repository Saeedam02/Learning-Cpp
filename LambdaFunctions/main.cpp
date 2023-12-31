#include <iostream>

int main() {
  /*
  Lambda function signature :
                              [capture list] (parameters) ->return type{
                                      // Function body
                              }
  */

  // Declaring a lambda function and calling it through a name
  /*
  auto func = [](){
      std::cout << "Hello World!" << std::endl;
  };
  func();
  func();
  */

  // Declare a lambda function and call it directly
  /*
  [](){
     std::cout << "Hello World!" << std::endl;
  }();
  */

  // Lambda function that takes parameters

  /*
  [](double a, double b){
     std::cout << "a + b : " << (a + b)  << std::endl;
  }(10.0,50.0);
  */

  /*
   auto func1 = [](double a, double b){
      std::cout << "a + b : " << (a + b)  << std::endl;
   };

   func1(10,20);
   func1(5,7);
   */

  // Lambda function that returns something
  /*
  auto result = [](double a, double b){
      return a + b;
  }(10,60);

  //std::cout << "result : " << result << std::endl;
  std::cout << "result : " << [](double a, double b){
      return a + b;
  }(10,60) << std::endl;
  */

  /*
   auto func1 = [](double a, double b){
       return a + b;
   };

   auto result1 = func1(23,7);
   auto result2 = func1(9,45);

   std::cout << "result1 : " << result1 << std::endl;
   std::cout << "result2 : " << result2 << std::endl;
   std::cout  <<"direct call : " << func1(5,2) << std::endl;
   */

  // Explicitly specify the return type
  auto func3 = [](double a, double b) -> int { return a + b; };

  auto func4 = [](double a, double b) { return a + b; };

  double a{6.9};
  double b{3.5};

  auto result3 = func3(a, b);
  auto result4 = func4(a, b);

  std::cout << "result3 : " << result3 << std::endl;
  std::cout << "result4 : " << result4 << std::endl;
  std::cout << "sizeof(result3) : " << sizeof(result3) << std::endl;  // 4
  std::cout << "sizeof(result4) : " << sizeof(result4) << std::endl;  // 8

  std::cout << "Done!" << std::endl;
  /*-------------------------------------------------------------------------------------*/

  // Capture lists
  /*
   double a{10};
   double b{20};

   auto func = [a,b](){
       std::cout  << "a + b : " << a + b << std::endl;
   };
   func();
   */

  // Capturing by value
  /*
   int c{42};

   auto func = [c](){
       std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
   };

   for(size_t i{} ; i < 5 ;++i){
       std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
       func();
       ++c;
   }

   */

  // Capture by reference
  /*
   int c{42};

   auto func = [&c](){
       std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
   };

   for(size_t i{} ; i < 5 ;++i){
       std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
       func();
       ++c;
   }
   */

  /*-------------------------------------------------------------------------------------*/

  // Capture everything by value
  /*
   int c{42};

   auto func = [=](){
       std::cout << "Inner value : " << c << std::endl;
   };

   for(size_t i{} ; i < 5 ;++i){
       std::cout << "Outer value : " << c << std::endl;
       func();
       ++c;
   }
   */

  // Capturing all reference
  /*
   int c{42};
   int d{5};

   auto func = [&](){
       std::cout << "Inner value : " << c << std::endl;
       std::cout << "Inner value(d) : " << d << std::endl;
   };

   for(size_t i{} ; i < 5 ;++i){
       std::cout << "Outer value : " << c << std::endl;
       func();
       ++c;
   }
   */
  return 0;
}