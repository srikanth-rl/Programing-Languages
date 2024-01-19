import java.util.*;

public class ok {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char n[] = in.next().toCharArray();
        Map<Character, Integer> map = new HashMap<>();
        map.put('N', 0);
        map.put('S', 0);
        map.put('E', 0);
        map.put('W', 0);
        for (int i = 0; i < n.length; i += 2)
            map.put(n[i], map.get(n[i]) + n[i + 1] - '0');
        System.out.println(((map.get('S') - map.get('N')) + (map.get('E') - map.get('W'))) == 0 ? true : false);
    }
}