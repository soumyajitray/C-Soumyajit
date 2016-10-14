/* *numList is a pointer of the array, passing number to be searched x and length of the array n from the main function*/
int binarySearch(int *numList,int x,int n){

int left = 0 , right = n;
/*figuring out the mid value through the pointer and checking if it is less(/greater) than the number to be searched, 
if yes then compare with the mid value of the left part of the series of numbers*/
while(left <= right){
	int mid = (left + right)/2;
	if( *(numList+mid) == x){
		return mid;
	}
	else if( *(numList+mid)<x){
		left= mid+1;
	}
	else if( *(numList+mid)>x){
		right= mid-1;
	}
}
return -1;
}
