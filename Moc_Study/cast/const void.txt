/*
const void* pConstVoid;
1）首先用const_cast转换将const void*的const属性去掉*/
 void* pChar = const_cast<void*>(pConstVoid);
 
/*2）用static_cast给void* 变量加上const属性，并转换成char* */
  const char* p = static_cast<const char*>(pChar);

/* void的含义 */

/* void即“无类型”，void */ *则为“无类型指针”，可以指向任何数据类型。

/* void指针使用规范 */

/* ①void指针可以指向任意类型的数据，亦即可用任意数据类型的指针对void指针赋值。例如： */

int *pint;

void *pvoid;

pvoid = pint; /* 不过不能 pint = pvoid; 

/*如果要将pvoid赋给其他类型指针，则需要强制类型转换如：*/
pint = (int *)pvoid;


/*②在ANSI C标准中，不允许对void指针进行算术运算如pvoid++或pvoid+=1等，而在GNU中则允许，因为在缺省情况下，GNU认为void *与char *一样。*/
sizeof( *pvoid )== sizeof( char ).

/*void的作用

①对函数返回的限定。

②对函数参数的限定。

当函数不需要返回值时，必须使用void限定。例如：*/
 void func(int, int);

/*当函数不允许接受参数时，必须使用void限定。例如： */
int func(void)。

/*由于void指针可以指向任意类型的数据，亦即可用任意数据类型的指针对void指针赋值，因此还可以用void指针来作为函数形参，
这样函数就可以接受任意数据类型的指针作为参数。例如：*//

void * memcpy( void *dest, const void *src, size_t len );

void * memset( void * buffer, int c, size_t num );

/*指向void 的指针

一个指向任何对象 类型的指针都可以赋值给类型为void* 的变量，void* 
可以赋值给另一个void* ，两个void* 可以比较相等与否，而且可以显式地将void* 转换到另一个类型。
其它操作都是不安全的，因为编译器并不知道实际被指的是哪种对象。
因此，对void* 做其他任何操作都将引起编译错误。要使用void*,就必须显式地将经转换到某个指向特定类型的指针。

例：*/

void Test(int *pi)

{

void *pv = pi; //ok ,从 int* 到 void* 的隐式转换

*pv ; //错误：void* 不能间接引用

pv++; //错误：void* 不能增量（不知道被指定类型的大小）

int *pi1 = static_cast<int*>(pv); //ok: 显式转换回 int*

double * pi2 = pv; //错误

double *pi3 = pi; //错误

double *pi4 = static_cast<double*>(pv); //ok: 不安全

}

/*
1.一般来说，如果一个指针被转换（“强制”，cast)到与被批对象的实际类型不同的指针，使用后一个指针就是不安全的。 
void* 的最重要用途是需要向函数货传递一个指针，而又不能对对象的类型做任凭假设。还有就是从函数返回一个无类型的对象。要使用这样的对象。必须通过显式的类型转换。

2,到函数的指针与到成员的指针都不能赋给void*

=========================================================================================
*/

const char *p; //*p是const,p可变：const 后面紧跟的是char，所以*p是一个char字符，不可变

const (char *) p;//p是const,*p可变：const 后面紧跟的是（char *）这个整体，所以p是char*类型，不可变。

char* const p; //p是const,*p可变:const 后面紧跟的是p,所以p不可变

const char* const p; //p和*p都是const：第一个const后面紧跟的是char,所以char类型的字符*p不可变；第二个const后面紧跟的是p,所以p不可变。

char const * p;// *p是const,p可变：const后面紧跟的是*,但是单独的*不能表明修饰的内容，所以将*p看成一个整体，所以const修饰的是*p,*p不可变。

(char*) const p;//p是const,*p可变：const紧跟的是p,所以p不可变。

char* const p;// p是const,*p可变：const紧跟的是p,所以p不可变。

char const* const p;// p和*p都是const：第一个const紧跟的是*,不能表明修饰的内容，将后面整体的（* const p）看成一个整体，那就说明*p不可变，第二个const后面紧跟的是p,所以p不可变。

/*

C/C++ 中关于以下三种定义：

*/


const char *ptr; //常量指针

char const *ptr;  //指针常量

char * const ptr;   //字符指针常数

