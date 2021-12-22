import java.util.SplittableRandom;

/**
 * @program: December12
 * @description
 * @author: YouName
 * @create: 2021-09-12 23:06
 **/
class Person{
    private String name;
    private int age;
    private static int count;
    public Person(){
        this("mir Yan");
        System.out.println("无参数的调用");
    }
    public Person(String name){
        this.name=name;
        System.out.println("一个参数的调用");
    }
    public Person(String name,int age){
        this.name=name;
        this.age=age;
        System.out.println("两个参数的调用");
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    static {
        count++;
        System.out.println(count);
    }
    {
        System.out.println("实例代码块");
    }
}
public class test {
    public static void main(String[] args) {
/*        int [][]arr={{1,2,3},{4,5,6}};
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println("");
        }*/
        //找出数组中不同的数字，使用异或的方法
      /*  int []arr={1,4,1,2,4};
        int ret=0;
        for (int i =0;i<arr.length;i++){
            ret=ret^arr[i];
        }
        System.out.println(ret);
    }*/
        Person per=new Person();
        //先调用静态方法，再调用实例化代码，在调用带有参数的构造方法，在调用不带参数的构造方法
    }
}