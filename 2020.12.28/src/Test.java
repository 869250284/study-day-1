
import com.sun.xml.internal.ws.api.model.wsdl.WSDLOutput;
import jdk.internal.org.objectweb.asm.tree.MultiANewArrayInsnNode;

import java.util.Arrays;
import java.util.Scanner;

/**
 * @program: 2020.12.28
 * @description
 * @author: YouName
 * @create: 2020-12-28 11:02
 **/
/*class Test0{
    public String toString(){
        System.out.println("aaa");

        return "bbb";
    }
}*/
/*
class Calculator{
    private  int num1;
    private  int num2;

    public int getNum1() {
        return num1;
    }

    public void setNum1(int num1) {
        this.num1 = num1;
    }

    public int getNum2() {
        return num2;
    }

    public void setNum2(int num2) {
        this.num2 = num2;
    }

    public int add(){
        return this.num1+num2;
    }
    public int sub(){
        return this.num1-num2;
    }
    public int mul(){
        return this.num1*num2;
    }
    public double dev (){
        return this.num1*1.0/num2;
    }
}
public class Test {
    public static void main(String[] args) {
        Calculator calculator=new Calculator();
        calculator.setNum1(10);
        calculator.setNum2(20);
        System.out.println("加法:");
        System.out.println(calculator.add());
        System.out.println("减法");
        System.out.println(calculator.sub());
    }
*/
/*
    public static void main(String[] args) {
        int n=789;
        int a=(n-n/100*100)/10;
        System.out.println(a);
    }
*//*


*/
/*    public static void main(String[] args) {
        int []arr1={1,2,3,4,5,6};
        int []arr2={99,98,97,96,95,94};
        int tmp=0;
        for(int i =0;i< arr1.length;i++){
            tmp=arr1[i];
            arr1[i]=arr2[i];
            arr2[i]=tmp;

        }
        System.out.println(Arrays.toString(arr1));
        System.out.println(Arrays.toString(arr2));
    }*//*

  */
/*  public static void main(String[] args) {
        System.out.println(new Test0());
    }*//*

    */
/*public static void main(String[] args) {
        int i,j,k,n;
        Scanner input=new Scanner(System.in);
        System.out.print("请输入金字塔层数: ");
        n=input.nextInt();
        for(i=1;i<=n;i++){
            for(j=1;j<n-i;j++)
                System.out.print(" ");
            for(k=1;k<2*i-1;k++)
                System.out.printf("*");
            System.out.printf("\n");
        }

    }*//*

}
*/
public class Test {
    public static void main(String[] args) {
        MyArraylist myArraylist1=new MyArraylist();
    }
}

