#include<stdio.h>
int binarySearch(int arr[], int data, int low,int high);

int main(){

      int n , arr[100], data, i ;
      int low , high;

      printf("Enter number of elements : ");
      scanf("%d",&n);

      printf("Enter elements of array: ");
      for(i=0; i<=n; i++){

            scanf("%d",&arr[i]);
      }

      printf("Enter data for searching : ");
      scanf("%d",&data);

      int result = binarySearch(arr, data, 0, n-1);

      if(result == -1){
            printf("Elements is not found");
      }else{
            printf("The elements position is : %d",result);
      }


}

int binarySearch(int arr[], int data, int low,int high){




            while(low <= high){

                   int mid = (low+high)/2;

                  if(arr[mid] == data){
                        return mid ;

                  }else if(arr[mid]< data){
                        low = mid +1;
                  }
                  else{
                        high = mid -1;
                  }

}

            return -1;


}












