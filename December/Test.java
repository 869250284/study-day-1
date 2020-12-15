import java.util.Scanner;
import java.util.Arrays;
public class Test{
	//冒泡排序代码
	public static void bubbleSort(int []arrays){
		boolean flg=false;
		for(int i =0;i<arrays.length-1;i++){
			flg=false;
			for(int j=0;j<arrays.length-1-i;j++){
				if(arrays[j]>arrays[j+1]){
					int tmp=arrays[j];
					arrays[j]=arrays[j+1];
					arrays[j+1]=tmp;
					flg=true; 
				}
				if(flg==flase){
					break;
				}
			}
		}
	}
	public static void main(String[] args) {
		int []arrays={20,10,15,5,7,3,1,23,19};
		bubbleSort(arrays);
		System.out.println(Arrays.toString(arrays));
	}
	//判断数组是否升序代码
	public static boolean isUp(int []arr){
		boolean flag=true;
		for(int i =0;i<arr.length-1;i++){
			if(arr[i]>arr[i+1]){
				return false;
			}
		}
		return flag;
	}
	public static void main2(String[] args) {
		int []arr={1,2,3,4,7};
		System.out.println(isUp(arr));

	}
	//数组排序代码
	public static void main1(String[] args) {
		int []arr={1,21,12,5,7,3,8};
		Arrays.sort(arr);
		System.out.println(Arrays.toString(arr));
	}
}