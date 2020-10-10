import java.util.concurrent.TimeUnit;
public class CodeChallenge1 {
    public static void traverse(int[][] mat) {
        int  k = 0;
        int row=mat[0].length-1;
        int col=mat.length-1;
        while (k <= row+col) {
            if (k%2!=0) {
                for (int i = 0; i <= row; i++) {
                    for (int j = 0; j<=col; j++) {
                        if ((i + j) == k) {
                            System.out.print(mat[i][j] + " ");
                        }
                    }
                }
            }
           else{
                for (int i = 0; i <= row; i++) {
                    for (int j = 0; j <= col; j++) {
                        if ((i + j) == k) {
                            System.out.print(mat[j][i] + " ");
                        }
                    }
                }
            }
            k++;
        }
        System.out.println();
    }

    public static void main(String[] args) throws InterruptedException{
        int[][] arr={{1,2,3,4,5},
                    {6,7,8,9,10},
                    {11,12,13,14,15},
                    {16,17,18,19,20},
                    {21,22,23,24,25}};
        long startTime=System.currentTimeMillis();
        traverse(arr);
        TimeUnit.SECONDS.sleep(1);
        long endTime=System.currentTimeMillis();
        System.out.println("time taken is "+(endTime-startTime)/100+"ms");
    }
}
