import java.util.Scanner;
public class HelloWord{
	public static void main(String[] args) {
			int num =1;
			int sum=0;
			while(num<=5){
				int i=1;
	         int ret =1;
	          while(i<=num){
               ret*=i; 
                i++;
            }
            num++;
            sum+=ret;
	}
	System.out.println(sum);
	}
public static void main9(String[] args) {
	int num =5;
	int i=1;
	int ret =1;
	while(i<=num){
         ret*=i; 
         i++;
	}
	System.out.println(ret);
}
public static void main8(String[] args) {
	//JAVA中不能做Switch类型的有Long类型 float类型 double类型boolean类型
	int a =10;
	switch(a){
		case 1:
		    System.out.println("1");
		    break;
		case 2:
		    System.out.println("2");
		    break;
		default:
		    System.out.println("请输入正确的数字");
	}
}
public static void main7(String[] args) {
	int x =10;
	int y =10;
	if(x==10)
	if(y==10)
		System.out.println("哈哈");
	else
		System.out.println("呵呵");
}
public static void main6(String[] args) {
	Scanner scan=new Scanner(System.in);
	//退出循环有两种 ctrl+C直接退出 或者ctrl+D 正常退出
	while(scan.hasNextInt()) {
int year=scan.nextInt();
if((year%4==0 && year%100!=0) || (year%400==0)) {
     System.out.println("是闰年");
	}
	else
	{
		System.out.println("不是闰年");
	}
	}
}
public static void main5(String[] args) {
	int a =10;
	if(a>10){
		System.out.println("hello");
	}
	else if(a<10){
		System.out.println("haha");
	}
	else	{
		System.out.println("gege");
	}

}
public static void main1(String[] args) {
	Scanner scan= new Scanner(System.in);
	/*String str=scan.nextLine();*/
	String str=scan.next();
	System.out.println(str);
}
	public static void main4(String[] args) {
		Scanner scan=new Scanner(System.in);
		int a=scan.nextInt();
		System.out.println(a);	
		String str=scan.next();
		System.out.println(str);
	}
}


/*public class HelloWord{
	public static void main1(String[] args) {
	System.out.println("HelloWord");
	}
}//第一个程序*/