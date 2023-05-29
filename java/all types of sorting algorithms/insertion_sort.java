
import java.util.Scanner;

public class insertion_sort {
    public static void main(String[] args) {
        int i,j, temp;
        int arr[] = {90, 50, 80, 10, 20};


        System.out.println("original array");
            for (int k = 0; k < arr.length ; k++) {
                System.out.print(arr[k] + " ");
            }
        for(i = 1; i < arr.length ; i++){
            // assign the value of corresposding i index to temp variable
            temp = arr[i];
            // now decrease the value of the i by 1 and give it to the j 
            j = i - 1;
            // now run this loop until j is greater than 0 so it will stop running as j becomes less than 0
            // also run the loop as long as the value of temp or current element is lesser than the previous elements in the array
            // if the value of temp becomes greater than or equals to the value of the previoud elment break for while loop
            // until then keep applying the value of previoud element to the current elements
            while(j >= 0 && arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = temp;


            System.out.println("\n" + i + "th iteration ");
            for (int k = 0; k < arr.length ; k++) {
                System.out.print(arr[k] + " ");
            }
        }


        System.out.println("final array");
        for( i =0; i < arr.length; i++){
            System.out.println(arr[i] + " ");
        }
    }
}
