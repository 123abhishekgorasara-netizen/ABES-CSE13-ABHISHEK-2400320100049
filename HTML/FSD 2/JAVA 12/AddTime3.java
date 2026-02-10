class AddTime3{
    private int hh,mm,ss;
    public Time(){
        hh=12;
        mm=25;
        ss=45;
    }
    public Time(int hh,int mm,int ss){
        this.hh=hh;
        this.mm=mm;
        this.ss=ss;
    }
    public void show(){
        System.out.printf("%02d:%02d:%02d\n",hh,mm,ss);
    }
    public void Add(Time t){
        ss = ss +t.ss;  
        mm = mm +t.mm + ss/60;
        ss = ss % 60;
        hh = hh + t.hh + mm/60;
        mm = mm % 60;

    }
    public void Add(Time t1,Time t2){
        ss = (t1.ss +t2.ss);  
        mm = t1.mm +t2.mm + ss/60;
        ss = ss % 60;
        hh = t1.hh + t2.hh + mm/60;
        mm = mm % 60;
    }
    public static void main(String[] args) {
        Time t1=new Time();
        Time t2=new Time();
        Time t3=new Time(12,5,55);
        t1.show();
        t3.show();
        t2.Add(t1,t3);
        t2.show();
        t3.Add( t2);
        t3.show();
        
    }
}