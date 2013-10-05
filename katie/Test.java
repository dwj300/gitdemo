public class Test {
    public static void main(String[] args) {
        Fruit strawberry = new Fruit();
        strawberry.size = 10;
        strawberry.name = "katie";
        Fruit.name = "doug";
        System.out.println("" + strawberry.name);
    }
}
