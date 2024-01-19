import java.util.*;
import java.util.stream.Collectors;

class ArrayEx {
    public static void main(String[] args) {
        Integer array[] = new Integer[5];// fixed size can't be changed.....
        array[0] = 0;// accessing ...
        array[1] = -1;
        array[2] = 9;
        array[3] = 28;
        array[4] = 6;
        System.out.println("Array :\n" + Arrays.toString(array) + "\n");
        System.out.println("Array Sum :\n" + Arrays.asList(array).stream().reduce(0, Integer::sum));
        System.out.println("Max Element in Array :\n" + Collections.max(Arrays.asList(array)));// TO USE MAX OR MIN USE
                                                                                               // Integer not int...
        System.out.println("Min Element in Array :\n" + Collections.min(Arrays.asList(array)));
        List<Integer> list = Arrays.asList(1, 2, -5, 3, 4);
        int arr[] = list.stream().mapToInt(Integer::intValue).toArray();
        System.out.println("Convertion of List To Array: " + Arrays.toString(arr));
    }
}

class arrayList {
    public void display() {
        List<Integer> alist = new ArrayList<>();// flexible array but without declaring size...
        for (int i = 1; i < 11; i++)
            alist.add(i);
        alist.add(8);// supports redendency same inputs can also insert....
        alist.add(8);
        System.out.println("ArrayList : \n" + alist);
        System.out.println("Removed index : " + alist.remove(2));
        System.out.println("ArrayList : " + alist);
        System.out.println("5th Element : " + alist.get(5));// pass the index to access....
        System.out.println("Changed 2nd index val to 7" + alist.set(2, -7));// Updating..
        System.out.println("ArrayList : " + alist);
        System.out.println("Search Element 2 : " + alist.contains(2) + "\n 2 is in the index : " + alist.indexOf(2));// searching...
        // ArrayList alist2 = new ArrayList();//can store any data type...
        List<Integer> alist2 = new ArrayList<>(alist);// can store only integer data type...
        System.out.println("Cloned_ArrayList 2 : " + alist2);
        alist.clear();// del all elements in the ArrayList...
        System.out.println("Cleared_ArrayList 1 : " + alist);
        Iterator<Integer> it = alist2.iterator();// accessing val using loop...
        System.out.println("Print by Using Iterator or Loop :");
        while (it.hasNext())
            System.out.print(it.next() + " ");
        System.out.println("\nPrinting list without [ , ]: "
                + alist2.stream().map(Object::toString).collect(Collectors.joining(" ")));
        System.out.println("Printing list without [ , ]: "
                + alist2.toString().replace("[", "").replace("]", "").replace(",", " "));
        System.out.println("\nSize of ArrayList : " + alist2.size() + "\n");
    }
}

class linkedList {
    public void display() {
        LinkedList<Integer> list = new LinkedList<>();
        for (int i = 1; i <= 3; i++)
            list.add(i);
        list.add(8);
        list.addLast(0);
        list.add(8);
        list.offer(-2);// Inesrt val -2 to Tail of the List
        list.addFirst(7);
        Collections.sort(list);
        System.out.println("Sorted List :\n" + list);
        Collections.sort(list, Collections.reverseOrder());
        System.out.println("Descending Sorted List :\n" + list);
        System.out.println("Printing Head of the List : " + list.element());// list.getFirst() or list.peek() or
                                                                            // list.element()return head but not
                                                                            // remove....
        System.out.println("Element in 2nd index : " + list.get(2));
        System.out.println("Printing the last Occurence of the Element 8 : " + list.lastIndexOf(8));
        System.out.println("Removing head of the List : " + list.remove());
        System.out.println("Removing head of the List : " + list.pop());// pop also can used in LL...
        System.out.println("Removing head of the List : " + list.remove());
        System.out.println("Last Element in the List : " + list.getLast());
        System.out.println("Linked-List : " + list + "\nSize : " + list.size());
        list.clear();
        System.out.println("Empty List : " + list);
        System.out.println("Removing head but List Empty : " + list.poll() + "\n");// poll will try to remove the head
                                                                                   // if list empty return null...
    }
}

class priorityQueue {
    public void display() {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(7);
        pq.add(6);
        pq.add(-5);
        pq.add(0);
        System.out.println("PriorityQueue : \n" + pq);// insert as most prioritized..
        System.out.println("Removed Head is : " + pq.poll());
        System.out.println("Head is : " + pq.peek() + "\n");
    }
}

class hashSet {
    public void display() {
        Set<String> hash = new HashSet<>();
        hash.add("Sri");
        hash.add("Hai");
        hash.add("Aswin");
        hash.add("Godwin");
        hash.add("Hello");
        System.out.println("HashSet : \n" + hash);
        Set<String> hash2 = new TreeSet<>();
        hash2.add("Sri");
        hash2.add("Hai");
        hash2.add("Aswin");
        hash2.add("Godwin");
        hash2.add("Hello");
        System.out.println("TreeSet : \n" + hash2);
        Set<String> hash3 = new LinkedHashSet<>();
        hash3.add("Sri");
        hash3.add("Hai");
        hash3.add("Aswin");
        hash3.add("Godwin");
        hash3.add("Hello");
        System.out.println("LinkedHashSet : \n" + hash3);
    }
}

class map {
    public void display() {
        try (Scanner in = new Scanner(System.in)) {
            Map<Character, Integer> map = new TreeMap<>();
            for (var arr : in.nextLine().toCharArray())
                map.merge(arr, 1, Integer::sum);

            // Sorting by frequency......
            int nums[] = new int[] { 5, 5, 1, 2, 5, 1, 3, 2 }, k = 3;
            Map<Integer, Integer> values = new HashMap<>();
            for (int i : nums)
                values.merge(i, 1, Integer::sum);
            List<Integer> uniqueElements = new ArrayList<>(values.keySet());
            uniqueElements.sort((a, b) -> values.get(b) - values.get(a));
            int res[] = new int[k];
            for (int i = 0; i < k; i++)
                res[i] = uniqueElements.get(i);
            System.out.println("Sorting by Values with top k most frequency in " + Arrays.toString(nums));
            System.out.println("That map : " + values + "\ntop 3 most frequent elements : " + Arrays.toString(res));

            System.out.println("Enter a String to print Duplicate Using Map:");
            System.out.println("(SORTED)Count Of All Elements : " + map + "\nDuplicate Elements :");
            for (Map.Entry sri : map.entrySet())
                if (map.get(sri.getKey()) != 1)
                    System.out.println(sri.getKey() + " - " + sri.getValue());
            map.entrySet().forEach(System.out::println);
        }
    }
}

class CollectionsOfJava {
    public static void main(String[] args) {
        // ArrayEx array = new ArrayEx();
        // arrayList arrList = new arrayList();
        // linkedList linkList = new linkedList();
        // priorityQueue pq = new priorityQueue();
        // hashSet hash = new hashSet();
        map Map = new map();

        // array.main(args);;
        // arrList.display();
        // linkList.display();
        // pq.display();
        // hash.display();
        Map.display();
    }
}