
#include<iostream>
using namespace std;
char stack[100];
int top=-1;
class infix_to_postfix
{
public:
void push(char b)
{
 stack[++top]=b;
}
char pop()
{
 if(top==-1)
 {
 return -1;
 }
 else
 {
 return stack[top--];
 }
}
 int priority(char b)
 {
 if(b=='(')
 return 0;
 if(b=='+' || b=='-')
 return 1;
 if(b=='*' || b=='/')
 return 2;
 }
};
int main()
{
 infix_to_postfix obj;
 char exp[100];
 char *a, b;
 cout<<"Enter the infix algebraic expression:";
 cin>>exp;
 a=exp;
 cout<<"The postfix algebraic expression is:";
 while(*a!='\0')
 {
 if(isalnum(*a))
 cout<<*a;
 else if(*a=='(')
 obj.push(*a);
 else if(*a==')')
 {
 while((b=obj.pop())!='(')
 cout<<b;
 }
 else
 {
 while(obj.priority(stack[top])>=obj.priority(*a))
 cout<<obj.pop();
 obj.push(*a);
 }
 a++;
 }
 while(top!=-1)
 {
 cout<<obj.pop();
 }
 return 0;
}
