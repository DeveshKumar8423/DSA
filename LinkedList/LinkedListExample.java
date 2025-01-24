import java.util.LinkedList;

public class LinkedListExample{
    public static void main(String[] args){
        LinkedList<String> list = new LinkedList<>();

        list.add("Red");
        list.add("Blue");
        list.add("Green");
        System.out.println("List: " + list);

        list.add(1, "Yellow");
        System.out.println("adding Yellow  " + list);

        list.remove("Blue");
        System.out.println("removing Blue " + list);

        String firstElement = list.get(0);
        System.out.println("First Element " + firstElement);

        list.set(2, "Purple");
        System.out.println("updating " + list);

        boolean hasGreen = list.contains("Green");
        System.out.println(" contain Green " + hasGreen);

        System.out.println("Iterating ");
        for (String item : list) {
            System.out.println(item);
        }
    }
}
