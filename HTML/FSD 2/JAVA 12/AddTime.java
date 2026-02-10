class AddTime {
    private int hh, mm, ss;

    // Default constructor
    public AddTime() {
        hh = 12;
        mm = 25;
        ss = 45;
    }

    // Parameterized constructor
    public AddTime(int hh, int mm, int ss) {
        this.hh = hh;
        this.mm = mm;
        this.ss = ss;
    }

    // Display time
    public void show() {
        System.out.printf("%02d:%02d:%02d\n", hh, mm, ss);
    }

    // Add two time objects
    public void add(AddTime t1, AddTime t2) {
        ss = t1.ss + t2.ss;
        mm = t1.mm + t2.mm + ss / 60;
        ss = ss % 60;
        hh = t1.hh + t2.hh + mm / 60;
        mm = mm % 60;
    }

    public static void main(String[] args) {
        AddTime t1 = new AddTime();
        AddTime t2 = new AddTime();
        AddTime t3 = new AddTime(12, 5, 55);

        t1.show();
        t3.show();
        t2.add(t1, t3);
        t2.show();
    }
}