//#include <stdio.h>
#include<iostream>
using namespace std;
int  *GetDate(int wk,int dy);
int main()
{   int const *p=NULL;    
    p=GetDate(4,2);        
   
    cout<<p<<endl;
    cout<<*p<<endl;
    p=GetDate(4,3); 
           
        
        
    return 0;
}

int  *GetDate(int wk,int dy)
        {   static int count=0;
            static int calendar[5][7]=
            {
               {1,2,3,4,5,6,7},
               {8,9,10,11,12,13,14},
               {15,16,17,18,19,20,21},
               {22,23,24,25,26,27,28},
               {29,30,31,-1}
            };
            count ++;
            cout<<count<<endl;
            return &calendar[wk-1][dy-1];
            //返回值是地址，函数的定义必须是特殊的变量，即指针
            
        }
            