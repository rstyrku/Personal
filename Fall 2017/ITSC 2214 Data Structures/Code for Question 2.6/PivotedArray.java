import java.util.Scanner;
public class PivotedArray {
    public static int locatePivot(int[] list, int low, int high){
        if (high<low){
            return -1;
        }
        if(low >= high){
            return low;
        }
        int mid=(high+low)/2;
        if(mid<high && list[mid]>list[mid+1]){
            return mid;
        }
        else if (mid>low && list[mid]<list[mid-1]){
            return mid-1;
        }
        else if (list[low]>list[mid]){
            return locatePivot(list,low,mid-1);
        }
        else{
            return locatePivot(list,mid+1,high);
        }
    }
    public static int binarySearch(int[] list, int low, int high, int i){
        if(high<low){
            return -1;
        }
        if(low==high){
            return low;
        }
        int mid =(high+low)/2;
        if(list[mid]==i){
            return mid;
        }
        if (i<list[mid]){
            return binarySearch(list, low,(mid-1),i);
        }
        else{
            return binarySearch(list,(mid+1), high, i);
        }
    }
    public static int pivotSearch(int[] list, int low, int high, int key){
        int pivot=locatePivot(list, 0, list.length-1);
        int mid=(high+low)/2;
        if(pivot==-1){
            return binarySearch(list, 0 , list.length-1,key);
        }
        if(list[pivot]==key){
            return pivot;
        }
        if (list[0]<=key){
            return binarySearch(list, low, pivot-1, key);
        }
        else{
            return binarySearch(list,pivot+1, high, key);
        }
    }
    public static void main(String[]args){
        int[] list={3,4,5,6,1,2};
        System.out.println("What Number Would You like to Search For?");
        Scanner sc=new Scanner(System.in);
        int key=sc.nextInt();
        int answer=pivotSearch(list,0,list.length-1,key);
        if (answer==-1){
            System.out.println("The number is not in the list");
        }
        else
            System.out.println("The number is located at index: "+answer+".");
    }
}
