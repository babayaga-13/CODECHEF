import java.util.*;

import java.lang.*;

import java.io.*;

class Codechef
{

public
    static void main(String[] args) throws java.lang.Exception
    {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t > 0)
        {

            int n = sc.nextInt();

            int arr[] = new int[n + 1];

            for (int i = 1; i <= n; i++)
            {
                arr[i] = sc.nextInt();
            }

            long ans = 0;
            for (int i = 1; i <= n; i++)
            {

                long left = (long)arr[i];

                if (left == 1)
                {
                    ans += (long)n;
                }
                else
                {

                    long power = 1;
                    for (int j = i; j <= n; j++)
                    {
                        power = left * power;
                        if (power > 1000000000L)
                        {
                            break;
                        }
                        else
                        {
                            long right = (long)arr[j];
                            if (power <= right)
                            {
                                ans++;
                            }
                        }
                    }
                }
            }
            System.out.println(ans);

            t--;
        }
    }
}
