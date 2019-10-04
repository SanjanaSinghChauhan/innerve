package lecture5;

import java.util.Scanner;

public class BinarySearch {
	public static Scanner s = new Scanner(System.in);

	public static int binarysearch(int[] arr, int element) {
		int l = 0;
		int r = arr.length-1;
		while(l<=r)  {
			int mid=(l+r)/2;
			if(element==arr[mid])
				return mid;
			else if(element<arr[mid])
				r=mid-1;
			else
				l=mid+1;
		}
		return -1;
	}

	public static int[] takeInput() {
		int n= s.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++)  {
			arr[i]=s.nextInt();
		}
		return arr;
	}

	public static void main(String[] args) {
		int n=s.nextInt();
		int[] arr = takeInput();
		int e=s.nextInt();
		int c=binarysearch(arr,e);
		System.out.println(c); 
	}

}
