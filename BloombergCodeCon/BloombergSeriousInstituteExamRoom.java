import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;
//Your submission should *ONLY* use the following class name
public class BloombergSeriousInstituteExamRoom
{
    public static void main(String[] args)
    {
    		
    	int N = 0;
    	int S = 0;
       Scanner stdin = new Scanner(System.in);
       if(stdin.hasNextLine()) 
       {
    	  if (N == 0)
    		  N = stdin.nextInt();
    	  if (S==0)
    		  S = stdin.nextInt();   	  
    	  
       }
       
       ArrayList<Integer> X = new ArrayList<Integer>(N);
       int i = 0; 
       int curmax = 0;
       while ( stdin.hasNextLine()) {  
    	   if (i ==N)
    		   break;    	   
    	   X.add(stdin.nextInt());
  	   
    	   i++;   	   
       }
       
       Collections.sort(X);
       
       int minindex = 0;
       int maxindex = X.size()-1; 
       boolean ispossible = false;    
       

       
       System.out.println(BinarySearch(X, S));
       
       stdin.close();
    }
    
    public static int Fun (ArrayList<Integer> arr, int x, int S){
    	int studentPlaced=1;
    	int lastpos=arr.get(0);
    	for(int i=1;i<arr.size();i++){
    		if(arr.get(i)-lastpos>=x){
    			studentPlaced++;
                
    			if(studentPlaced == S)
    			  return 1;
                  lastpos=arr.get(i);
    		  }
    	  }
    	  return 0;
  	}
          
    public static int BinarySearch (ArrayList<Integer> arr, int S)
    {
    	int start=0;
    	int end=arr.get(arr.size()-1);
     	
    	while(start<end){
     		int mid=(start+end)/2;
     		if(Fun (arr, mid, S)==1)
     		    start=mid+1;
     		else
     		    end=mid;
    	}
     		
    	return start-1;     	
    }
}



