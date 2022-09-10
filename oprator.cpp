
ans = (a + b) * c;

int Arr[5];
printf("%d",Arr[1]);

struct Demo obj;
obj.i = 11;

struct Demo *p = &obj;
p->i = 11;

ans = ++no;     // Preincrement
ans = no++; // Postincrement

ans = --no;     // Predecrement
ans = no--; // Postdecrement

int ans = +10;

int ans = -10;

int *p = (int *)malloc(sizeof(int) * 3);

int no = 11;
int *p = &no;
printf("%d",*p);


sizeof(int);        // 4

int no = 10;
printf("%d",sizeof(++no));  // 4
printf("%d",no);    // 10


int a = 10;
int b = 3;
int c = 0;

c = a + b;      // 13
c = a - b;      // 7
c = a * b;      // 30
c = a / b;      // 3
c = a % b;      // 1



c=a & b;

0  0  0  0 1  1  1  1                //13
0  0  0  1 0  1  0  1           &    //21
__________________________________
0  0  0  0  0  1 0  1               //5


c=a | b 

0  0  0  0  1  1  0  1             
0  0  0  1  0  1  0  1         |
__________________________________
0  0  0  1  1  1  0  1             //29


c=a ^ b 
0  0  0  0  1  1  0  1
0  0  0  1  0  1  0  1         ^
__________________________________
0  0  0  1  1  0  0  0             //24

c=~b;

0 0 0 1 0 1 0 1               ~   //234
__________________________________
1 1 1 0 1 0 1 0               //234


//left shift
c=b<<3;
                
                0  0  0  1  0  1

c=b>>3
                           
128  64  32  16  8   4   2  1    //power

7    6   5   4   3   2   1  0   //bit position

0    0   1   0   1   1   0  1    //input

(32+8+6+4+1)
(45)


int a=10;
int b=20;

if(a>b)   //f

if(a<b)  //T

if(a==b)  //f

if(a!=b) //T

if(a>=b) //F

if(a<=b)  //T


a==b 
a=b 


&&  ANI
||  kiwa


int a=11;
int b=21;

//  F    &&  F 
if((a==b)&&(a>b))   //F

// T    &&  T   
if((a<b)&&(a!=b))   //T

// F     &&  T
if((a==b)||(a<b))  //T

// T    ||  T
if((a<b)||(a!=b))  //T

// T    &&  T
if((a!=b)&&(a<b))   //T

//F     ||  F
if(a==b)||(a>b)   //F



OP1  OP2    &&    ||
T    T      T      true
T    F      F      true
F    T      F      true
F    F      F      false

