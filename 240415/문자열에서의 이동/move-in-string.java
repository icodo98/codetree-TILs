import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int energy = 0;
        int step = 0;
        char next = 'b';
        for(int i = 1 ; i < s.length(); i++){
            step++;
            if(s.charAt(i) != next) continue;
            energy += step * step;
            step = 0;
            next++;
            if(next > 'c') next = 'a';
        }
        if(energy == 0) energy = -1;
        System.out.println(energy);


    }

}