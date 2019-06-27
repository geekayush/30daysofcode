import java.util.*;

public class Solution {
    public static int mostConsecutiveOnes(int n) {
        // convert number->binary string->char array
        char[] binary = Integer.toBinaryString(n).toCharArray();
        
        // count of current sequence of consecutive ones
        int tmpCount = 0; 
        
        // running maximum count of consecutive ones for any section to left of tmpCount
        int maxCount = 0; 
        for(int i = 0; i < binary.length; i++){
            
            // reset to 0 if we hit a '0' char
            if(binary[i] == '0') {
                
                // set new max if needed
                if(tmpCount > maxCount){
                    maxCount = tmpCount;
                }
                    
                tmpCount = 0;
            }
            else { // current location is a section of consecutive 1's
                // increment tmpCount
                tmpCount =  tmpCount + 1; 
            }
        }
        // conditional is necessary here in case the string does not end with a 0
        return (tmpCount > maxCount) ? tmpCount : maxCount;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        System.out.println(mostConsecutiveOnes(n));
    }
}