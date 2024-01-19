import java.util.*;

class spiral_Matrix {
	public static List<Integer> spiralOrder(int[][] matrix) {
		List<Integer> ans = new ArrayList<>();
		int m = matrix.length, n = matrix[0].length, x = 0, y = 0, z = 0;
		boolean[][] seen = new boolean[m][n];
		int[] dr = { 0, 1, 0, -1 };
		int[] dc = { 1, 0, -1, 0 };
		for (int i = 0; i < m * n; i++) {
			ans.add(matrix[x][y]);
			seen[x][y] = true;
			int cr = x + dr[z];
			int cc = y + dc[z];
			if (cr >= 0 && cr < m && cc >= 0 && cc < n
					&& !seen[cr][cc]) {
				x = cr;
				y = cc;
			} else {
				z = (z + 1) % 4;
				x += dr[z];
				y += dc[z];
			}
		}
		return ans;
	}

	public static List<Integer> spiral(int[][] matrix) {
		List<Integer> result = new ArrayList<>();
		int rs = 0, re = matrix.length - 1, cs = 0, ce = matrix[0].length - 1;
		while (rs <= re && cs <= ce) {
			for (int i = cs; i <= ce; ++i)
				result.add(matrix[rs][i]);
			rs++;// for right...
			for (int i = rs; i <= re; ++i)
				result.add(matrix[i][ce]);
			ce--;// for down...
			if (rs <= re) {
				for (int i = ce; i >= cs; --i)
					result.add(matrix[re][i]);
				re--;// for left...
			}
			if (cs <= ce) {
				for (int i = re; i >= rs; --i)
					result.add(matrix[i][cs]);
				cs++;// for up...
			}
		}
		return result;
	}

	public static void main(String[] args) {
		int a[][] = {
				{ 1, 2, 3, 4 },
				{ 5, 6, 7, 8 },
				{ 9, 10, 11, 12 },
				{ 13, 14, 15, 16 } };
		List<Integer> l = spiralOrder(a);
		Collections.reverse(l);
		System.out.println(
				"Reverse spiral dynamic :\n" + l.toString().replace("[", "").replace("]", "").replace(",", " "));
		System.out.println("Using loop : \n" + new ArrayList<>(spiral(a)));
	}
}
