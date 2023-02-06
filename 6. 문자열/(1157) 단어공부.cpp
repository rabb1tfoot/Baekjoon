import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Integer numOfAlphabet[] = new Integer[26];
        Arrays.fill(numOfAlphabet, 0);

        String str = sc.next();
        str = str.toUpperCase(Locale.ROOT);
        int mostSelect = 0;
        int mostSelectedIndex = 0;
        int stack = 0;
        for(int i = 0; i < str.length(); ++i)
        {
            int text =  str.charAt(i);

            numOfAlphabet[text - 65]++;
            if(mostSelect < numOfAlphabet[text - 65])
                mostSelect = numOfAlphabet[text - 65];
        }

        for(int i = 0; i < numOfAlphabet.length; ++i)
        {
            if(mostSelect == numOfAlphabet[i])
            {
                mostSelectedIndex = i;
                stack++;
            }
            if(stack == 2)
            {
                System.out.println("?");
                return;
            }

        }
        char mostPresent = (char)(mostSelectedIndex + 65);
        System.out.println(mostPresent);
    }
}