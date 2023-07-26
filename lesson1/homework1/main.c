/**
   * @brief 点亮第一个发光管 
   * @param
   * @retval
*/
#include <REGX52.H>
sbit D1 = P2^7;
void main(){
	//D1 = 0;位操作
	P2 = 0x7f; //总线操作
}