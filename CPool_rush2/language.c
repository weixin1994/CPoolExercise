#include <stdio.h>
#include "./include/my.h"
#include "./include/my_macroABS.h"
char language(char const *sentence)
{
	float eng[] = {8.17, 1.49, 2.78, 4.25, 12.70, 2.23, 2.02, 6.10, 6.97, 0.15, 0.77, 4.03, 2.41, 6.75, 7.51, 1.93, 0.1, 5.99, 6.33, 9.06, 2.76, 0.98, 2.36, 0.15, 1.97, 0.07};
	float fre[] = {7.64, 0.9, 3.26, 3.67, 14.72, 1.07, 0.87, 0.74, 7.53, 0.61, 0.05, 5.46, 2.97, 7.1, 5.8, 2.52, 1.36, 6.69, 7.95, 7.24, 6.31, 1.84, 0.07, 0.43, 0.13, 0.33};
	float ger[] = {6.52, 1.89, 2.73, 5.08, 16.4, 1.7, 3, 4.58,6.55, 0.27, 1.42, 3.44, 2.53, 9.78, 2.59, 0.7, 0.02, 7, 7.3, 6.15, 4.17, 0.85, 1.92, 0.03, 0.04, 1.13};
	float spa[] = {11.53, 2.22, 4.02, 5.01, 12.18, 0.69, 1.77, 0.7, 6.25,0.49, 0.01, 4.97, 3.16, 6.71, 8.68, 2.51, 0.88, 6.88, 7.98, 4.63, 2.93, 1.14, 0.02, 0.22, 1.01, 0.47};
	/*enum alpha
	{
	a = 0,b = 1,c = 2,d = 3,e = 4, f = 5,g = 6,h = 7,i = 8,j = 9,k = 10,l = 11,
	m = 12,n = 13,o = 14,p = 15,q = 16,r = 17,s = 18,t = 19,u = 20,v = 21,w = 22,
	x = 23,y = 24,z = 25	
	};*/
	float sum1,sum2,sum3,sum4;
	int len = my_strlen(sentence);
	char alpha[200] = {};
	int alpha_count[26] = {};
	int ac = 0;
	float rate[26] = {0};
	
	
	for(int i = 0;i < len;i++)
	{
		if((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z'))
		{
			alpha[ac] = sentence[i];
			ac++;
		}		
	}
	char *alpha_low = my_strlowcase(alpha);
	for(int i = 0;i < 26;i++)
	{
		alpha_count[alpha_low[i] - 'a']++;
	}
	/*for(int i = 0;i < 26;i++)
	{
		printf("countii ==== %d--%d\n",i,alpha_count[i]);
	}*/
	
	
	for(int i = 0;i < 26;i++)
	{
		rate[i] = (float)alpha_count[i] / (float)ac;
	}
	
	/*for(int i = 0;i < 26;i++)
	{
		printf("rateii ==== %d--%f\n",i,rate[i]);
	}*/
	
	for(int i = 0;i < 26;i++)
		{
			sum1 = sum1 + ABS(eng[i] - rate[i]*100);
			sum2 = sum2 + ABS(fre[i] - rate[i]*100);
			sum3 = sum3 + ABS(ger[i] - rate[i]*100);
			sum4 = sum4 + ABS(spa[i] - rate[i]*100);
		}
		
	float sum[4] = {sum1,sum2,sum3,sum4};
	/*for(int i = 0;i < 4;i++)
	{
		printf("sumii ==== %d--%f\n",i,sum[i]);
	}*/
	float temp;
	for(int i = 0;i < 4;i++)
	{
		for(int j = 0;j < 4 - i - 1;j++)
		{
			if(sum[j] > sum[j+1])
			{
				temp = sum[j+1];
				sum[j+1] = sum[j];
				sum[j] = temp;	
			}
		}
	}
	for(int i = 0;i < 4;i++)
	{
		printf("ordersumii ==== %d--%f\n",i,sum[i]);
	}
	
	
	if(sum[0] == sum1)
		return '1';
	if(sum[0] == sum2)
		return '2';
	if(sum[0] == sum3)
		return '3';
	if(sum[0] == sum4)
		return '4';
}
