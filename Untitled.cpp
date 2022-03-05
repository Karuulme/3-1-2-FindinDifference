#include <stdio.h>
int main(){	
	int NumbersArray[10]={10,21,1,16,5,4,8,7,9,10};
	int BigNumber=0;
	for(int i=sizeof(NumbersArray)/4-1;i>=0;i--)
	{
		for(int j=i;j>=0;j--)
		{
			if(NumbersArray[i]-NumbersArray[j]>BigNumber){
				BigNumber=NumbersArray[i]-NumbersArray[j];
			}
		}
	}
	printf("%d",BigNumber);
}
