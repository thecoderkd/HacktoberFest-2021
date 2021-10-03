import java.util.Scanner;
public class linearSeach
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int N, item, arr[];


        System.out.println("Enter total number of elements:");
        N = sc.nextInt();
        //Array creation

        arr = new int[N];
        System.out.println("Enter elements");

        for (int i = 0; i < N; i++)
            arr[i] = sc.nextInt();

        System.out.println("Enter the search value:");
        item = sc.nextInt();

        for (int j = 0; j <N; j++)
        {
            if (arr[j] == item)
            {
                System.out.println(item+" is present at location "+(j+1));
                /*Item is found so to stop the search and to come out of the
                 * loop use break statement.*/
                break;
            }

        }

        System.out.println("Element not found!");


    }
}

