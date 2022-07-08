#include "stdio.h"
#include "math.h"
#include "FFT.h"


#define FFT_N			1024		//傅里叶变换的点数 
#define Sample_Frequency 100


int main()
{
    Init_FFT();			//①初始化各项参数，此函数只需执行一次 ; 修改FFT的点数去头文件的宏定义处修改 
    int i = 0;	
    
    for (i = 0; i < FFT_N; i++)//制造输入序列 
	{
		if (sin(2 * PI * 10 * i / Sample_Frequency) > 0)
			Refresh_Data(i, 5);
		else if (sin(2 * PI * 10 * i / Sample_Frequency) < 0)
			Refresh_Data(i, 0);
		else
			Refresh_Data(i, 2.5);
	}
    
    FFT();				//②执行FFT变换

    for (i = 0; i < FFT_N; i++)//输出FFT变换结果
    {
        printf("FFT_RESULT(%d) = %f\n", i, FFT_RESULT(i));
    }

}