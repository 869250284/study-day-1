import java.util.Scanner;
import java.util.Arrays;
public class  test{
	public static  void look(int []avgs){
		Scanner s=new Scanner(System.in);
		for(int i =0;i<avgs.length;i++){
			if(s==avgs[i])
				System.out.print("找到了");
			else
			System.out.print("没找到");
	}
	}
public static void main(String[] args) {
		int []avgs={5,3,9,7,10};
		look(avgs);
	}
/*public static int max(int []arr){
	int max =arr[0];
	for(int i=0;i<arr.length;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}*/
public static double max(int []arr){
	int sum = 0;
	for(int i = 0;i<arr.length;i++){
		sum+=arr[i];

	}
	return (double)sum/(double)arr.length;
}

public static void main14(String[] args) {
	int []arr={1,20,19,8};
	System.out.print(max(arr));
}
	public static void main13(String[] args) {
		int []arr={1,2,3,4,5,6};
		int []ret=new int[arr.length];
		System.arraycopy(arr,0,ret,0,arr.length);
		System.out.println(Arrays.toString(ret));
	}
public static int[] arr1(int []arr){
	int arr1[]=new int[arr.length];
	for(int i=0;i<arr1.length;i++){
		arr1[i]=arr[i];
	}
	return arr1;
}
	public static void main12(String[] args) {
		int []arr={1,2,3,4,5};
		int []give=arr1(arr);
		System.out.println(Arrays.toString(give));
	}
	public static void main11(String[] args) {
		String [] names={"张民？","王托？","强强？"};
		for(int i=0;i<names.length;i++){
			System.out.println(names[i]);
		}
	}
	public static void main10(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++)
				System.out.println("·");
		}
	}
	/*public static int fun(int n){
		int sum=1;
		for(int i =1;i<=n;i++){
         sum*=i;
		}
		return sum;
	}*/
	/*public static void main8(String[] args) {
	Scanner scan=new Scanner(System.in);
	int n=scan.nextInt();
	int i=fun(n);
	System.out.println(i);


	}*/
/*	public static int fun(int n){
		int f1=1;
		int f2=1;
		int f3=0;
		for(int i=3;i<=n;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		return f3;
	}*/
	// public static void main7(String[] args) {
	// 	System.out.println(fun(40));
	// }
	// public static void main6(String[] args) {
	// 	Scanner scan=new Scanner(System.in);
	// 	int n=scan.nextInt();
	// 	int sum=0;
	// 	for(int i =0;i<32;i++){
	// 		if(((n>>i) & 1)==1 ){
	// 			sum++;
	// 		}
	// 	}
	// 	System.out.println(sum);
	// }
	public static void main5(String[] args) {
		int count=0;
		for(int i=1;i<=100;i++){
			if(i/10==9){
				count++;
			}
			if(i%10==9){
				count++;
			}
		}
		System.out.println(count);
	}
	public static void main4(String[] args) {
		Scanner scan=new Scanner(System.in);
		int n =scan.nextInt();
		double sum=0;
		int flag=1;
		for(int i =1;i<=n;i++){
			sum=sum+1.0/i*flag;
			flag=-flag;
		}
		System.out.println(sum);
	}
	public static void main3(String[] args) {
		Scanner scan=new Scanner(System.in);
		int a =scan.nextInt();
		int b =scan.nextInt();
		int c=0;
		while((a%b) != 0){
			c=a%b;
			a=b;
			b=c;
		}
		System.out.println(c);
	}
	public static void main2(String[] args) {
			Scanner scan=new Scanner(System.in);
		int a=scan.nextInt();
		if (a<18) {
			System.out.println("少年");
		}
		else if ((a>=19) && (a<=28)) {
			System.out.println("青年");
		}
		else if ((a>=29) && (a<=55)) {
			System.out.println("中年");
		}
		else if(a>=56){
			System.out.println("老年");
		}
		else{
			System.out.println("输入错误");
		}
	}
}
	/*public static void main1(String[] args) {
		int i =1;
		for(i=1;i<=10;i++){
			System.out.println(i);
		}
	}
	public static void main0(String[] args) {
	Scanner scan=new Scanner(System.in);
    int sum=scan.nextInt(); 
    while(sum <= 20){
    	if(sum % 15==0){
    	   System.out.println(sum);
    	   continue;//结束本次循环
    	}
    	System.out.println("haha");
    	sum++;
    }//
    }  
}*/