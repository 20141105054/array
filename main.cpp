//
//  main.cpp
//  array
//
//  Created by 20141105054 on 15/12/2.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int a[3]={1,2,3};
    int b[4];
    int *p;
    p=a;
    int i;
    for(i=0;i<100;i++)
    {
        
        b[i]=i;
        
    }
    printf("%x      %x       %x\n",&a[0],&a[1],&a[2],&a[3]);
    printf("%x      %x      %x\n",a[0],a[1],a[2],a[3]);
    
    printf("%x           %x\n",*p,b);
    return 0;
    
}