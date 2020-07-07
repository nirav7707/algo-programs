#include<stdio.h>
void insertion(int array[],int len){
	
	int i,j,current;
	for(i=0; i<len;i++){
		current= array[i];
		while(j>=0 && array[j]>current){
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=current;
		printf("%d",array[i]);
	} 
	for (i=0;i<len;i++){
		printf("%d",array[i]);
	}
}
void main(){
	int array[]={5,4,9,10,7,3,2,1};
	int len=8;
	
	insertion(array,len);
	
}
