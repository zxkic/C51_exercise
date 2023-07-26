/**
   * @brief	 第一个发光管闪烁||流水灯程序
   * @param
   * @retval
*/
#include <REGX52.H>
#include<intrins.h>
#define uchar unsigned char
sbit D1 = P2^0;
sbit D2 = P2^1;
sbit D3 = P2^2;
sbit D4 = P2^3;
sbit D5 = P2^4;
sbit D6 = P2^5;
sbit D7 = P2^6;
sbit D8 = P2^7;
uchar i;

void Delay(unsigned char z){
	uchar x,y;
	x = z;
	for(;x>0;x--){
		for(y=110;y>0;y--);
	}
}

void main(){
	while(1){
		//D1 = ~D1; //位操作
		//Delay(200);
		//总线操作
//		P2 = 0xfe;
//		Delay(200);
//		P2 = 0xff;
//		Delay(200);
		//位操作下的流水灯
//		D1 = 0;
//		Delay(200);
//		D1 = 1;
//		Delay(200);
//		D2 = 0;
//		Delay(200);
//		D2 = 1;
//		Delay(200);
//		D3 = 0;
//		Delay(200);
//		D3 = 1;
//		Delay(200);
//		D4 = 0;
//		Delay(200);
//		D4 = 1;
//		Delay(200);
//		D5 = 0;
//		Delay(200);
//		D5 = 1;
//		Delay(200);
//		D6 = 0;
//		Delay(200);
//		D6 = 1;
//		Delay(200);
//		D7 = 0;
//		Delay(200);
//		D7 = 1;
//		Delay(200);
//		D8 = 0;
//		Delay(200);
//		D8 = 1;
//		Delay(200);

		//总线操作下的流水线程序
		P2 = 0xfe;
		Delay(200);
		for(i=0;i<8;i++){
			P2 = _crol_(P2,1);
			Delay(200); 
		}


			
	}
}