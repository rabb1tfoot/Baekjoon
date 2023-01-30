import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] answer = new int[2];
        answer[0] = 1;
        answer[1] = n;


        PlusCycle(n, answer);
        System.out.print(answer[0]);
    }
    public static void PlusCycle(int _n, int[] _answer)
    {
        int oneNumber = 0;
        int tenNumber = 0;

        if(_n < 10)
        {
            tenNumber = 0;
            oneNumber = _n;
        }
        else
        {
            oneNumber = _n % 10;
            tenNumber = _n / 10;
        }

        int newOneNumber = oneNumber + tenNumber;
        newOneNumber %= 10;

        int newNumber = oneNumber * 10 + newOneNumber;

        if(_answer[1] != newNumber)
        {
            _answer[0]++;
            PlusCycle(newNumber, _answer);
        }
    }
}
