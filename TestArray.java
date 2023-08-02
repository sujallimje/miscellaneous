public class TestArray{
    public static void main(String[] args){
        int a[]={10,20,30,40,50}; // Initialisation
        //Traversing array
        for(int i=0;i<a.length;i++){
            System.out.println(a[i]); 
        }
        //Calc Average
        float sum=0, avg;
        for(int i=0;i<a.length;i++){
            sum += a[i];
        }
        avg=sum/a.length;
        System.out.println("The average of numbers is "+ avg);
        
    }
}