public class Main {
    public static void main(String args[]) {
        System.out.println(path(4,4));

        String ans ="";
        path(ans, 0, 0, 3, 3);
    }

    static int path(int m, int n) {
        if(m == 1 || n == 1) {
            return 1;
        }
        return path(m-1, n) + path(m, n-1);
    }

    static void path(String ans, int curRow, int curCol, int endRow, int endCol) {
        if(curRow == endRow && curCol == endCol) {
            System.out.println(ans);
            return;
        }
        if(curRow > endRow || curCol > endCol) {
            return;
        }

        path(ans+"H", curRow, curCol+1, endRow, endCol);
        path(ans+"V", curRow+1, curCol, endRow, endCol);
    }


}