/**
   * @brief	点亮1,3,5,7或2,4,5,6
   * @param
   * @retval
*/
#include <REGX52.H>
sbit D1 = P2^0;
sbit D2 = P2^1;
sbit D3 = P2^2;
sbit D4 = P2^3;
sbit D5 = P2^4;
sbit D6 = P2^5;
sbit D7 = P2^6;
sbit D8 = P2^7;

void main(){
	//位操作
//	D1 = 0;
//	D3 = 0;
//	D5 = 0;
//	D7 = 0;

//	D2 = 0;
//	D4 = 0;
//	D5 = 0;
//	D6 = 0;
	//总线操作
	//P2 = 0xaa;
	P2 = 0xc5;
}