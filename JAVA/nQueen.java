public class Main {
    public static void main(String args[]) {
        int board[][] = new int [5][5];
        nQueen(board, 0, 0, 0, 0, "");
    }

    static void nQueen(int board[][], int row, int cols, int ndiag, int rdiag, String asf) {

        if(row == board.length) {
            System.out.println(asf);
            return;
        }

        for(int col=0; col<board.length; col++) {
            if (
                ((cols & (1 << col)) == 0) &&
                ((ndiag & (1 << (row + col))) == 0) &&
                ((rdiag & (1 << (row - col + board.length - 1))) == 0)
            ) {
                board[row][col] = 1;

                cols ^= (1 << col);
                ndiag ^= (1 << (row+col));
                rdiag ^= (1 << (row-col+board.length-1));

                nQueen(board, row+1, cols, ndiag, rdiag, asf + (row+1) + "-" + (col+1) + ", ");

                board[row][col] = 0;

                cols ^= (1 << col);
                ndiag ^= (1 << (row+col));
                rdiag ^= (1 << (row-col+board.length-1));
            }
        }
    }
}
