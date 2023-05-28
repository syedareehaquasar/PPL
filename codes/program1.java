public class program1 {
    public static void main(String[] args) {
        final int time = 3 * 60 * 60;
        int mathsQues = 50, ques = 150, t;
        t = time / (ques + 2 * mathsQues);
        System.out.println("Time for mathematics= " + (mathsQues * 2 * t) / 60 + "minutes");
    }
}
