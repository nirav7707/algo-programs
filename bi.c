#include<stdio.h>
#include<math.h>

void binary(int first,int last,int value,int list[] ){
	int mid;
	while(first<last){
		mid=(floor((first+last)/2));
		if (list[mid]==value)
		{
			printf("value which you want to find is %d position in list array",mid);
			break;
		}
		else if (list[mid]<value){
			first=mid+1;
			
		}
		else if (list[mid]>value){
			last=mid-1;
		}
		else{
			return -1;
		}
	}
}
void main()
{
	int list[]={1,2,3,4,5,6,7,8,9,10};
	int value,last,first;
	printf("input value which you want to find");
	scanf("%d",&value);
	last = 10;
	first =0;
	binary(first,last,value,list);
	
}



