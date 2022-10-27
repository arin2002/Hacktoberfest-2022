

import java.util.*;

class Pair{
	int x;
	int y;
	Pair(int x,int y){
		this.x=x;
		this.y=y;
	}
}
public class RottingOranges{
	static  int orangesRotting(int[][] grid) {
        int initialX=-1,initialY=-1,emptyCells=0,freshOranges=0;
        Queue<Pair>q= new LinkedList<>();
		for(int i=0;i<grid.length;i++){
			for(int j=0;j<grid[0].length;j++){
				if(grid[i][j]==2){
					initialX=i;
					initialY=j;
				q.add(new Pair(initialX,initialY));
				}
                if(grid[i][j]==0){
                    emptyCells++;
                }
                if(grid[i][j]==1){
                    freshOranges++;
                }
			}
		}

        if(emptyCells==grid.length*grid[0].length){
            return 0;
        }
		if(initialX==-1&&initialY==-1)
			return -1;

		int[] x={0,1,0,-1};
		int[] y={1,0,-1,0};
		int time=-1;
		while(!q.isEmpty()){
            int size=q.size();
            time++;
            for(int qsize=0;qsize<size;qsize++){
                Pair initialValues= q.remove();
			for(int i=0;i<4;i++){
				int nextX=initialValues.x+x[i];
				int nextY=initialValues.y+y[i];
				if(nextX>=0&&nextX<grid.length&&nextY>=0&&nextY<grid[0].length&&grid[nextX][nextY]==1){
					q.add(new Pair(nextX,nextY));
					grid[nextX][nextY]=2;
                    freshOranges--;
				}
			}
                
        }
			
	}
		if(freshOranges==0)
		return time;
        return -1;
    }

	public static void main(String[] args) {
		int[][] a={{2,1,1},{1,1,0},{0,1,1}};
		System.out.println(orangesRotting(a));
	}
}

//problem link: https://leetcode.com/problems/rotting-oranges/