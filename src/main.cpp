#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include "global.h"
#include "complex.h"
using namespace std;

FILE*filestream;
FILE*stream;

int sub(int sub_a,int sub_b){
    int  tmp =100;
    int ret =0;
    ret = tmp - sub_a -sub_b;
    return ret;

}

int add(int p,int q)
{
    int kz = 19;
    int ret =0;
    ret = sub(kz,p);
    return kz+p+q;


}
void testM()
{
    int a[]={1,2,3,4,5};
    int* ptr = (int*)(&a + 1);
    printf("a : %d, b:%d\n",*(a + 1),*(ptr - 1));

}

int main(int argc, char *argv[])
{
    short a = 0x12;
    short b = 0x34;
    short c = 0x56;
    short d = 0x78;
    long long f = 0;

    unsigned char aa = 0xa5;
   // unsigned char bb = (0x5a) >> 5;
    unsigned char bb = (~aa) >> 5;
    
    printf("~aa= %x\n",~aa);
    printf("bb= %x\n",bb);

 //   char len_a[10];
    char len_a[10] = "hello";
    printf("len = %d\n", strlen(len_a));
    printf("len = %d\n", sizeof(len_a));
    testM();
#if 0
    f = (f | ( (long long)d << 48));
    
    printf("d = 0x%lx\n",f);
    
    printf("sizeof a = %d\n",sizeof(a));
    f = 0;

    f = (f | (a));
    f = (f | (b << 16));
    f = (f | (c << 32));
    f = (f | (d << 48));
    printf("f = %lx\n",f);
  
    f = (f | ( (d << 48)| (c << 32) | (b << 16) | a));
    printf("d = %lx\n",d);
#endif

#if 0
    if(0 != reverseTest())
    {
        printf("error in reverseTest\n");
    }

    if(0 != substringTest())
    {
        printf("error in substringTest\n");
    }
    if( 0 != findMedianSortedArraysTest())
    {
        printf("error in findMedianSortedArraysTest\n");
    }
#endif
//
//    if(0 != isSameTreeTest())
//    {
//        printf("error in isSameTreeTest\n");
//    }
//
    int k = 11;
    int m =10;
    int n =0;
#if 0
    n=k+m;
    printf(" n =%d\n",n);    
    add(k,m);
    binarySearchTest();
    removeNthFromEndTest();
    testComplex();
    mergeTwoListsTest();
#endif
    stackAndQueueTest();
    return 0;
}




