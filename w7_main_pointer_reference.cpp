 #include <avr/io.h>
 typedef volatile unsigned char vu8;
 typedef volatile unsigned int vu16;
 //#define DDRD_hbc (*(vu8 *)0x2a)
 #define DM_0x100 (*(vu8 *)0x0100) //vu8 *ptr;
 #define DM_0x102 (*(vu16 *)0x0110)
 #define DDRC_hbc (*(vu8 *)0x27)
 #define R0x00 (*(vu8 *)0x00)
 void swap_value(vu8 c,vu8 d); //call by value傳值 swap交換
 void swap_pointer(vu8 *c,vu8 *d);//call by pointer 指標
 void swap_reference(vu8 &c,vu8 &d);//call by reference
 vu8 *pt7;
 vu8 a77=5;
 vu8 &c77=a77; //call by reference
 vu8 *pt77=&DDRC; // call by pointer,call by address
 void aaa(void);
 int main(void)
 { while(1)
     {   c77=10;
         *pt77+=1;
         *pt77+=1;
         DDRC+=1;
         *pt7=0xf0; 
         pt7=&DDRC_hbc;
         *pt7+=1;
          R0x00=0xf0;
          R0x00=0x0f;
          DM_0x100+=1;
          DM_0x100+=1;
          DM_0x102+=2;
          DM_0x102+=0xfff0;
          DDRC_hbc+=1;
          DDRC +=1;
          DDRC_hbc+=1;
          
         vu8  a7=5;
         vu8  b7=10;
         vu8 *ptr;
         //vu8 &c7=a7;
         //vu8 *ptr7=&a7;
         vu8 *pt7=&DDRD;
          *pt7=0b11110000;
          DDRD=255;
          *(&DDRD)=15;
          *(&(*(&DDRD)))=128;
         vu8 a=5,b=10;
         swap_value(5,10);   //a=5 b=10 拿a籃子內的5顆蘋果(value),拿b籃子內的10顆蘋果(value)
         swap_pointer(&a,&b);//a=10,b=5 用指標c指向a籃子及指標d指向b籃子(call by address,call by pointer)
                             //多了兩個指標,比較佔記憶體
         swap_reference(a,b);//a=5,b=10 拿a籃子及拿b籃子(call by reference)
     }
    return 0; ///////////////////////
 }
 void swap_value(vu8  c,vu8 d)
 { vu8 temp =c; //temp=c=5
     c=d;       //c=d=10;
     d=temp;    //d=temp=5;
 }
 void swap_pointer(vu8 *c ,vu8 *d)
  { vu8 temp=*c;
      *c=*d;
      *d=temp;
  }
  void swap_reference(vu8 &c,vu8 &d)
     { vu8 temp=c;
         c=d;
              d=temp;
     }