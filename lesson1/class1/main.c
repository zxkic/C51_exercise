/**
   * @brief	 ʹ��һ��LED������ 
   * @param
   * @retval
*/
#include <REGX52.H>
sbit D1 = P2^0;
void main(){
	//D1 = 0;  λ�����ķ�ʽ
	P2 = 0xfe; //���߲���
}
