
import java.util.Arrays;

public class MyArraylist{
    public int[] elem;//数组
    public int usedSize;//有效个数
    public static final int capacity=10;//初始容量
    public MyArraylist(){
        this.elem=new int[capacity];
        this.usedSize=0;
        private boolean isFull(){
           /* if(this.usedSize==this.elem.length){
                return true;
            }
            return false;*/
        return this.usedSize==this.elem.length;
        }
        //打印顺序表
        public void display(){
           for(int i=0;i<usedSize;i++){
               System.out.println(this.elem[i]+" ");
           }
            System.out.println();
        }
        //在pos位置新增元素
        public void add(int pos,int data){
            if(isFull){
               this.elem=
                       Arrays.copyOf(this.elem,2*this.elem.length);
            }
            if(pos<0 || pos>this.usedSize)
                return;
            //挪数据
            for(int i=this.usedSize-1;i>=pos;i--){
                this.elem[i+1]=this.elem[i];
                this.elem[pos]=data;
                this.usedSize++;
            }
        }
    }
}

