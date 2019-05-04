public class Main {
    public static void main(String[] args) {
        java.util.stream.IntStream.rangeClosed(1, 150).mapToObj(i -> String.format(i < 100 && (0 == i % 3 || 3 == i % 10 || 3 == (i / 10) % 10) ? "%02d!" : "%03d", i)).forEach(System.out::println);
    }
}
