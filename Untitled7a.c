//Write a Program to find the average , largest, and arranging the elements in
//descending order of one dimensional array
#include <stdio.h>
void main() {
// generate a array


int len , largest=0,i;
printf("Enter array len: ",len);
scanf("%d", &len);                  //6

// fill the array with consisting values..
int arr[len];                       //arr[6]


for (int i=0; i<len ; i++){
    printf("Enter the values :");
    scanf("%d", &arr[i]);
}

// average of array
 float avg;
 float sum = 0.0;

 for(int i=0; i<len ; i++)
 {
     sum += arr[i];
 }
    avg = sum/len;

    printf("The average of the array is %f\n", avg);


// largest no.

for(int i = 0 ; i<len ; i++)
{
    if(arr[i]>largest){
        largest = arr[i];
    }
}
printf("The largest no. in the array is %d\n", largest);


// arrange elements in descending order [0,1,2,3]
// [1,2,3,4]

for ( int i = 0; i<len ; i++)
{
    for ( int j = i+1 ; j<len ; j++)
    {
        if(arr[i]<arr[j])
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("The array arranged in a descending order is :\n");
for(int i = 0 ; i<len ; i++)
{
    printf("%d ", arr[i]);
}
}
