#include<stdio.h>
#include<math.h>

void swap(int i,int j ,int heaparray[]){
		int temp;	
		temp=heaparray[i];
		heaparray[i]=heaparray[j];
		heaparray[j]=temp;	
}

void multipalswap(int i,int heaparray[]){
	int j;
	j=floor(i/2);
	printf("multipalswap function is call\n");
	if (heaparray[i]>heaparray[j] && j!=0){
		printf("before swaping %d %d \n",heaparray[i],heaparray[j]);
		swap(i,j,heaparray);
		printf("after swaping %d %d \n",heaparray[i],heaparray[j]);
		multipalswap(j,heaparray);
	} 
}

void heap(int array[],int len){
	int heaparray[len],i,j,k;
	for(i=1;i<=len;i++){
		j=floor(i/2);
		heaparray[i]=array[i];
		if (i==1 || heaparray[i]<heaparray[j]){
			printf("heap if condition %d \n",heaparray[i]);			
		}	
		else{
			multipalswap(i,heaparray);
			printf("heap else condition %d \n",heaparray[i]);
		}
		for (k=1 ; k<len;k++){
		printf("%d -- ",heaparray[k]);
	}
	printf("\n");	
	}
		for (i=1 ; i<len;i++){
		printf("%d -- ",heaparray[i]);
	}
}

void main(){
	int array[]={0,5,7,8,12,13,18,20};
	int len=8;
	int i;
	heap(array,len);
}
