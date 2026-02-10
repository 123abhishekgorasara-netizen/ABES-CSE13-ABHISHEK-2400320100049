class Time{
    private int hh,mm,ss;
    public Time(){
        hh=mm=0;
    
    }
    public Time(int hh,int mm,int ss){
        this.hh=hh;
        this.mm=mm;
        this.ss=ss;
    }
    public void show(){
        System.out.printf("%02d:%02d:%02d\n",hh,mm,ss);


    }
    public static void main(String[] args) {
        Time t1=new Time();
        Time t2=new Time(41,55,125);
        t1.show();
        t2.show();
    }
}