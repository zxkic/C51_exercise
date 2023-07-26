/**
   * @brief	 使第一个LED灯亮起 
   * @param
   * @retval
*/
#include <REGX52.H>
sbit D1 = P2^0;
void main(){
	//D1 = 0;  位操作的方式
	P2 = 0xfe; //总线操作
}
