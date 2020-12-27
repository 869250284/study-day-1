/**
 * @program: 12.27
 * @description
 * @author: YouName
 * @create: 2020-12-27 22:49
 **/
/*class Test{
    public static void hello(){
        System.out.println("hello");
    }
}*/
/*public class Test{
    public int aMethod(){
        static int i=0;
        i++;
        return i;
    }
}*/
public class Test{
    private float f=1.0f;
    int m=12;
    static  int n=1;

}
public class December {
    public static void main(String[] args) {
        Test t=new Test();

    }
    public static void main2(String[] args) {
        Test test=new Test();
        test.aMethod();
        int j =test.aMethod();
        System.out.println(j);
    }
    public static void main1(String[] args) {
        String s;
        System.out.println("s="+s);
    }
    public static void main0(String[] args) {
        Test test=null;
        test.hello();
    }
}
