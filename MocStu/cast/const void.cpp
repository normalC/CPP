/*
const void* pConstVoid;
1��������const_castת����const void*��const����ȥ��*/
 void* pChar = const_cast<void*>(pConstVoid);
 
/*2����static_cast��void* ��������const���ԣ���ת����char* */
  const char* p = static_cast<const char*>(pChar);

/* void�ĺ��� */

/* void���������͡���void */ *��Ϊ��������ָ�롱������ָ���κ��������͡�

/* voidָ��ʹ�ù淶 */

/* ��voidָ�����ָ���������͵����ݣ��༴���������������͵�ָ���voidָ�븳ֵ�����磺 */

int *pint;

void *pvoid;

pvoid = pint; /* �������� pint = pvoid; 

/*���Ҫ��pvoid������������ָ�룬����Ҫǿ������ת���磺*/
pint = (int *)pvoid;


/*����ANSI C��׼�У��������voidָ���������������pvoid++��pvoid+=1�ȣ�����GNU����������Ϊ��ȱʡ����£�GNU��Ϊvoid *��char *һ����*/
sizeof( *pvoid )== sizeof( char ).

/*void������

�ٶԺ������ص��޶���

�ڶԺ����������޶���

����������Ҫ����ֵʱ������ʹ��void�޶������磺*/
 void func(int, int);

/*��������������ܲ���ʱ������ʹ��void�޶������磺 */
int func(void)��

/*����voidָ�����ָ���������͵����ݣ��༴���������������͵�ָ���voidָ�븳ֵ����˻�������voidָ������Ϊ�����βΣ�
���������Ϳ��Խ��������������͵�ָ����Ϊ���������磺*//

void * memcpy( void *dest, const void *src, size_t len );

void * memset( void * buffer, int c, size_t num );

/*ָ��void ��ָ��

һ��ָ���κζ��� ���͵�ָ�붼���Ը�ֵ������Ϊvoid* �ı�����void* 
���Ը�ֵ����һ��void* ������void* ���ԱȽ������񣬶��ҿ�����ʽ�ؽ�void* ת������һ�����͡�
�����������ǲ���ȫ�ģ���Ϊ����������֪��ʵ�ʱ�ָ�������ֶ���
��ˣ���void* �������κβ�����������������Ҫʹ��void*,�ͱ�����ʽ�ؽ���ת����ĳ��ָ���ض����͵�ָ�롣

����*/

void Test(int *pi)

{

void *pv = pi; //ok ,�� int* �� void* ����ʽת��

*pv ; //����void* ���ܼ������

pv++; //����void* ������������֪����ָ�����͵Ĵ�С��

int *pi1 = static_cast<int*>(pv); //ok: ��ʽת���� int*

double * pi2 = pv; //����

double *pi3 = pi; //����

double *pi4 = static_cast<double*>(pv); //ok: ����ȫ

}

/*
1.һ����˵�����һ��ָ�뱻ת������ǿ�ơ���cast)���뱻�������ʵ�����Ͳ�ͬ��ָ�룬ʹ�ú�һ��ָ����ǲ���ȫ�ġ� 
void* ������Ҫ��;����Ҫ����������һ��ָ�룬���ֲ��ܶԶ������������ƾ���衣���о��ǴӺ�������һ�������͵Ķ���Ҫʹ�������Ķ��󡣱���ͨ����ʽ������ת����

2,��������ָ���뵽��Ա��ָ�붼���ܸ���void*

=========================================================================================
*/

const char *p; //*p��const,p�ɱ䣺const �����������char������*p��һ��char�ַ������ɱ�

const (char *) p;//p��const,*p�ɱ䣺const ����������ǣ�char *��������壬����p��char*���ͣ����ɱ䡣

char* const p; //p��const,*p�ɱ�:const �����������p,����p���ɱ�

const char* const p; //p��*p����const����һ��const�����������char,����char���͵��ַ�*p���ɱ䣻�ڶ���const�����������p,����p���ɱ䡣

char const * p;// *p��const,p�ɱ䣺const�����������*,���ǵ�����*���ܱ������ε����ݣ����Խ�*p����һ�����壬����const���ε���*p,*p���ɱ䡣

(char*) const p;//p��const,*p�ɱ䣺const��������p,����p���ɱ䡣

char* const p;// p��const,*p�ɱ䣺const��������p,����p���ɱ䡣

char const* const p;// p��*p����const����һ��const��������*,���ܱ������ε����ݣ�����������ģ�* const p������һ�����壬�Ǿ�˵��*p���ɱ䣬�ڶ���const�����������p,����p���ɱ䡣

/*

C/C++ �й����������ֶ��壺

*/


const char *ptr; //����ָ��

char const *ptr;  //ָ�볣��

char * const ptr;   //�ַ�ָ�볣��

