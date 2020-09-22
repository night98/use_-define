#include <stdio.h>


int main(void)
{
#define string(f)    f    
#define str(f)     f  charleix;
    int c;
    string(char)  ww;
    str(char)
        charleix = 'a';
#define a 4
#define b 5+1
#define MUL(a,b) ((a)*(b))//修改处1
#define concat(x, y) x ## y
    c = MUL(a, b);//修改处2
    printf("c=%d\n", c);
    printf("%d\n", concat(1, 2));

#define GPIO_pin_4  6
#define SPI1_MISO_GPIO_Pin_x  GPIO_pin_4
#define SPI11_MISO_GPIO_Pin_x  67
#define _SPIx_Pin_x(spix)  SPI##spix##_MISO_GPIO_Pin_x
#define SPIx_Pin_x(spix) _SPIx_Pin_x(spix)
//#define SPIx_Pin_x_(spix) _SPIx_Pin_x((spix)##1)
#define SPIx                   1
#define asddf "qsdqdqw1252"
    int l = SPIx_Pin_x(SPIx);
    //int l2 = SPIx_Pin_x_(SPIx);
   // int n = _SPIx_Pin_x(SPIx);
    int dx = 5;
    int amd[sizeof(asddf)] = {0};

#define v1 "Etb"
#define VV  "v2"
#define V3  V##V
#define  v0 Etb
#define  v8 v8
#define _VsersionF(m,n) m ## n
#define VsersionF(m,n) _VsersionF(m,n)
#define _VsersionX(m,n) #m ## #n
#define VsersionX(m,n) _VsersionX(m,n)
    char ad[64] = VsersionF(v1, V3);
    char aa[64] = VsersionX(v0, v8);
    printf("ad %-28s\n",ad);
    printf("aa %-28s", aa);
    return 0;
}