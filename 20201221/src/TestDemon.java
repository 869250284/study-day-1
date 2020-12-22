class Person{
    private String name;
    private  int age;

    public Person(String name) {
        this.name = name;

    }

    public Person(){
        this ("zhangfei");
        System.out.println("person(init)");

    }
    public Person(String name,int age){
        this.name=name;
        this.age=age;
        System.out.println("Person(name,age)");
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

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
public class TestDemon {
    public static void main(String[] args) {
        Person person=new Person();//实例化一个对象
        System.out.println(person);
        Person person1=new Person("bit",19);
        System.out.println(person1) ;
    }
}
