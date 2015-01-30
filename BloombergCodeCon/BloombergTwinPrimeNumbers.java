import java.util.Scanner;
//Your submission should *ONLY* use the following class name
public class BloombergTwinPrimeNumbers
{
  public static void main(String[] args)
  {

     Scanner stdin = new Scanner(System.in);
     int K = 0; 
     
     
     
     while(stdin.hasNextLine()) 
     {
         ///System.out.println(stdin.nextLine());    	 
    	 K = stdin.nextInt();
    	 break; 
     }
     
     while (K >= 5) {
    	 
    	 boolean istrue = isPrime (K);    	 
    	 if (istrue && isPrime (K-2)){
    		 int m = K-2;
    		 System.out.println(m + "," + K);
    		break; 
    	 }
    	 K--;    	 
     }
     
     
     stdin.close();
  }

  	public static boolean isPrime(int n) {
	    for(int i=2;i<n;i++) {
	        if(n%i==0)
	            return false;
	    }
	    return true;
	}
  
}