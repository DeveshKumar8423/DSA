import java.util.LinkedList;
class b {
    public static void main(String [] args){
        LinkedList<Integer> list = new LinkedList<Integer>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.addFirst(70);
        System.out.println(list);
    }
}