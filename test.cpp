#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    float f = -13.625; // 1 1000 0010 10110100000000000000000
    char a = 0xFF;

    printf("\n\n0x%x\n", *((unsigned int*)&f));  // 0xc15a0000
    printf("%x\n", f);  // 0xc15a0000
    printf("%f\n", f);  // 0xc15a0000

    printf("%x\n", a);  
#if 0
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(unsigned long long) << endl;
    cout << sizeof(unsigned int) << endl;

    printf("\n\n0x%llx\n", *((unsigned long long*)&a));
    cout << (unsigned long long&)a << endl;
    printf("%lld\n", *((unsigned long long*)&a));  // 0x40140A3D70A3D70A  用lld 整數打印出來結果是 4617326776960669450

    printf("\n\n0x%x\n", *((unsigned int*)&f));  // 0xc15a0000
    printf("%d\n",*(unsigned int*)&f);  // 這邊用使用%d 印出來會是 -1051066368
    printf("%d\n", 0xc15a0000); // 0xc15a0000 用 整數 %d 打印出來 -1051066368
#endif

    return 0;
}
