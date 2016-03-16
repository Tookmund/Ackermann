public class ackermann
{
   public static void main(String[] args)
   {
      System.out.println("Ack 1,1 = " + ack(1,1) + "\nAck 1,2 = " + ack(1,2) + "\nAck 3,4 = " + ack(3,4) + "\nAck 4,0 = " + ack(4,0));
      System.out.println("ack(4,1): "+ack(4,1));
   }
   public static long ack(long m, long n) 
   {
      //System.out.println("m: "+m+" n: "+n);
      if (m==0) return n+1;
      else if (m > 0 && n == 0) return ack(m-1,1);
      else if (m > 0 && n > 0) return ack(m-1,ack(m,n-1));
      // should never get here
      return -1;
   }
}
