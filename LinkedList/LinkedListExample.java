import java.util.LinkedList;

public class LinkedListExample{
    public static void main(String[] args){
        LinkedList<String> list = new LinkedList<>();

        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");
        System.out.println("List: " + list);

        list.add(1, "Mango");
        System.out.println("adding Mango  " + list);

        list.remove("Banana");
        System.out.println("removing Banana " + list);

        String firstElement = list.get(0);
        System.out.println("First Element " + firstElement);

        list.set(2, "Grapes");
        System.out.println("updating " + list);

        boolean hascherry = list.contains("Cherry");
        System.out.println(" contain Cherry " + hascherry);

        System.out.println("Iterating ");
        for (String item : list) {
            System.out.println(item);
        }
    }
}
