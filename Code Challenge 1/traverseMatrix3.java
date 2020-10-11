public class CodeChallenge1 {
    public static void traverse(int[][] arr) {
        if (arr==null || arr.length==0 || arr[0].length==0)
            System.out.println("null value...please enter the matrix value");
        else {
            int k = 0;
            int row = arr.length - 1;
            int col = arr[0].length - 1;
            while (k <= (row + col)) {
                if (k % 2 != 0) {
                    for (int i = 0; i <= row; i++) {
                        for (int j = 0; j <= col; j++) {
                            if ((i + j) == k) {
                                System.out.print(arr[i][j] + " ");
                            }
                        }
                    }
                } else {
                    for (int i = row; i >= 0; i--) {
                        for (int j = 0; j <= col; j++) {
                            if ((i + j) == k) {
                                System.out.print(arr[i][j] + " ");
                            }
                        }
                    }
                }
                k++;
            }
            System.out.println();
            //time complexity is theta(m*n) where m=number of row and n=number of column
        }
    }
    public static void main(String[] args){
        int[][] mat={{11}
                   };
        traverse(mat);
    }
}


//                     {6,7,8,9},
//                    {11,12,13,14},
//                    {16,17,18,19},
//                    {21,22,23,24}
