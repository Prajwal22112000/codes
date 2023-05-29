public class largestNumInArray {
    static int i = 0;
    static int highest = 0;
    public static void recursion(int arr[], int size){
        if (i == size) {
            return;
        }
        if(arr[i] > highest){
            highest = arr[i];
        }
        largestNumInArray.recursion(arr, size);
        return;
    }
    public static void main(String a[]) {
        int arr[] = {10, 20, 30, 40, 99, 440, 4};
        int size = arr.length;
        recursion(arr, size);
        System.out.println(highest);
    }
}
