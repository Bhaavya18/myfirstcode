/*	Write a program to search for an element taken
    from user in a one dimensional array linearly.
    Also display the position at which it is found.
    (Use function for search)	                    */

#include<conio.h>
#include<iostream.h>

int search(int [], int);

int main(){
	clrscr();

	int arr[30];
	int val=2;

	for (int i=0; i<30; ++i,val+=3)
		arr[i]=val;

	for (i=0; i<30; ++i)
		cout<<arr[i]<<" ";

	cout<<"\n\nEnter value to search: ";
	cin>>val;

	int rply=search(arr,val);
	if (rply==-1)
		cout<<"\nValue not found in the array.";
	else
		cout<<"\nValue was found in the array at "<<rply<<" position.";

	getch();
	return 0;
}

int search(int arr[], int val){
	int i;
	for (i=30; i>0; --i){
		if(arr[i-1]==val)
			return i;
	}
	return -1;
}
