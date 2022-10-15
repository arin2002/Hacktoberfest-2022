import java.util.*;
import java.io.*;

class Main {
	public static void main (String[] args) throws java.lang.Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		
		while(t-- > 0) {
			String parts[] = br.readLine().split(" ");
			int w = Integer.parseInt(parts[0]);
			int h = Integer.parseInt(parts[1]);
			int n = Integer.parseInt(parts[2]);
			
			int row[] = new int[n];
			int col[] = new int[n];
			for(int i=0; i<n; i++) {
				String temp[] = br.readLine().split(" ");
				row[i] = Integer.parseInt(temp[0]);
				col[i] = Integer.parseInt(temp[1]);
			}

			Arrays.sort(row);
			Arrays.sort(col);
			
			// row max
			int rowMax = 0;
			for(int i=0; i<=n; i++) {
				int a = i==n ? w+1 : row[i];
				int b = i==0 ? 0 : row[i-1];
				
				rowMax = Math.max(rowMax, a - b - 1);
			}
			
			// colMax
			int colMax = 0;
			for(int i=0; i<=n; i++) {
				int a = i==n ? h+1 : col[i];
				int b = i==0 ? 0 : col[i-1];
				
				colMax = Math.max(colMax, a - b - 1);
			}
			
			System.out.println(rowMax * colMax);
		}
	}
}
