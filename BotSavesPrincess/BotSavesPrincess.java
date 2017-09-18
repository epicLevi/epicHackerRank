import java.io.*;
import java.util.*;

public class Solution {

     public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        final int n = in.nextInt();
        final String grid[] = new String[n];
        
        final int px, py;
        int mx, my;
        
        for (int i = 0; i < n; i++) {
            grid[i] = in.next();
        }
        
        if (grid[0].charAt(0) == 'p') {
            px = 0;
            py = 0;
        } else if (grid[n - 1].charAt(n - 1) == 'p') {
            px = n - 1;
            py = n - 1;
        } else if (grid[0].charAt(n - 1) == 'p') {
            px = n - 1;
            py = 0;
        } else {
            px = 0;
            py = n - 1;
        }
        
        mx = my = (n - 1) / 2;

        while (!(mx == px && my == py)) {
            if (my > py) {
                System.out.println("UP");
                my--;  
            } else if (my < py) {
                System.out.println("DOWN");
                my++;
            } else if (mx > px) {
                System.out.println("LEFT");
                mx--;
            } else if (mx < px) {
                System.out.println("RIGHT");
                mx++;
            } 
        }
    }
}
