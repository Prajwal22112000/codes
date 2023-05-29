import java.util.Scanner;


public class binary_search {
    public static int binarysearchalgo(int arr[], int n){
       int left = 0;
       int right = arr.length - 1;
       while(left <= right){
            int mid = (left + right)/2;
            if(arr[mid] == n){
                return mid;
            }
            else if(arr[mid] > n){
                right = mid - 1;
            }
            else if(arr[mid] < n){
                left = mid + 1;
            }
       }
       return -1;
    }
    public static void main(String args[]){
        // Scanner scn = new Scanner(System.in);
        System.out.println("Enter the Size of the Array");
        // int n = scn.nextInt();
        // int arr[] = new int[n];
        int arr[] = {0, 1, 2, 3, 23, 543, 2342, 34341, 535325, 6565334, 6234234, 334302};
        int n = 623;
        // for(int i = 0; i < arr.length;i++){
        //     System.out.println("Enter your number of index: " + i );
        //     arr[i] = scn.nextInt();
        // }
        for (int i = 0; i < arr.length; i++ ) {
            for (int j = 0; j < arr.length; j++ ) {
                if(arr[i] <= arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < arr.length ; i++) {
            System.out.println(binarysearchalgo(arr, arr[i]));
        }
    }
}
