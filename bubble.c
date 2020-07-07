#include<stdio.h>
void bubble(int list[],int len){
	int temp,i,j,k;
	
	for( j=0;j<len;j++){
	for( i=0;i<len-j;i++ ){
		if (list[i]>list[i+1]){
			temp=list[i];
			list[i]=list[i+1];
			list[i+1]=temp;
		}
	}}
	for( k=1;k<=len;k++){
		printf("%d ",list[k]);
	}
}
void main(){
	int list[10]={10,9,8,7,6,5,4,3,2,1};
	int len=10;
	bubble(list,len);
}
