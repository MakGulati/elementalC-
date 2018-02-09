You can see in the code below, the function must specify a return type. Then it must use the keyword 'operator' followed by the '+' sign.

      //The function that overloads the '+' sign
      int operator + (Shape shapeIn)
      {
          return Area() + shapeIn.Area();
      }
To use the overloaded '+' sign, we just have to use it with our user defined objects.

For example:

 int total = sh1 + sh2;