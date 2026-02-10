class User{
    static int uid;
    private String userId, email;
    private int age;
    public User(){
        userId= "user"+(++uid);
        System.out.println("User created with ID: "+uid);
    }
    public User(String email, int age){
        this.email=email;
        this.age = age;
    }
    public User(int a , String e){
        email=e;
        age=a;
    }
    public void show(){
        System.out.println("User ID: "+userId);
        System.out.println("Email: "+email);
        System.out.println("Age: "+age);
    }
} 
class constructor{
    public static void main(String args[]){
        User u=new User();
    }
}