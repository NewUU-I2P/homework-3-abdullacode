float problemSolution5(float x, float y, char operation) {
   float result;
   if (operation=='*')       result=x*y;
    else if   (operation=='/')       result=x/y;
    else if (operation=='+')       result=x+y;
    else result=x-y;
   return result;
}
