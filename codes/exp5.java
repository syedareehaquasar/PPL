import java.io.*;

class time {
    int hour, min, sec;

    public time(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    public time() {
        hour = 0;
        min = 0;
        sec = 0;
    }

    public time sum(time t2) {
        time t3 = new time();
        t3.sec = sec + t2.sec;
        t3.min = min + t2.min;
        t3.hour = hour + t2.hour;
        if (t3.sec >= 60) {
            t3.min = t3.sec / 60;
            t3.sec = t3.sec % 60;
        }
        if (t3.min >= 60) {
            t3.hour = t3.min / 60;
            t3.min = t3.min % 60;
        }
        return (t3);
    }

    public void display() {
        System.out.println(hour + ":" + min + ":" + sec);
    }
}

public class exp5 {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Syeda Reeha Quasar 14114802719 \n\n");
        time t1 = new time(1, 56, 55);
        time t2 = new time(2, 00, 10);
        time t3 = new time();
        t3 = t1.sum(t2);
        System.out.print("Time 1:- ");
        t1.display();
        System.out.print("Time 2:- ");
        t2.display();
        System.out.print("Resultant time after addition is:- ");
        t3.display();
    }
}