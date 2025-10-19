public class Types {
    public static void main(String[] args) {
        byte b = 42;
        char c = 'A';
        short s = 1024;
        int i = 5000;
        float f = 1.403435f;
        double d = 494.94094494d;
        double result = (f*b) + (i/c) - (d-s);
        System.out.println(result);
    }
}