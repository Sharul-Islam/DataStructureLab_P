

#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
float scanNum(char ch) {
   int val;
   val = ch;
   return float(val-'0');
}
int isOperator(char ch) {
   if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/')
      return 1;
   return -1;
}
int isOperand(char ch) {
   if(ch >= '0' && ch <= '9')
      return 1;
   return -1;
}
float Operation(int a, int b, char op) {




   if(op == '+')
      return b+a;
   else if(op == '-')
      return b-a;
   else if(op == '*')
      return b*a;
   else if(op == '/')
      return b/a;
   else
      return INT_MIN;
}
float postfixEval(string postfix) {
   int a,b;
   stack<float> stk;
   string::iterator it;
   for(it=postfix.begin(); it!=postfix.end(); it++) {



     if(isOperator(*it) != -1) {
         a = stk.top();
         stk.pop();
         b = stk.top();
         stk.pop();
         stk.push(Operation(a, b, *it));
      }else if(isOperand(*it) > 0) {
         stk.push(scanNum(*it));
      }
   }
   return stk.top();
}
main() {
    string post;
    cout<<"Enter the postfix algebraic expression "<<endl;
    cin>>post;
  cout << "The result is: "<<postfixEval(post);
}